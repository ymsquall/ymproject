#include "PatchMakerWindow.h"
#include "ui_PatchMakerWindow.h"
#include "AboutDialog.h"
#include "ui_AboutDialog.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QStandardItemModel>
#include "helper.h"
#include <QtDebug>
#include <QScrollBar>
#include <QGlobal.h>
#include "ZipCompress.h"

PatchMakerWindow::PatchMakerWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PatchMakerWindow)
{
    mAboutDlg = NULL;
    ui->setupUi(this);

    QString nowPath = QDir::currentPath();
    mSelDirPath1 = nowPath + "/Versions/000001";
    mSelDirPath2 = nowPath + "/Versions/000002";
    mSelDirPath3 = nowPath;
    ui->lineEdit_1->setText(mSelDirPath1);
    ui->lineEdit_2->setText(mSelDirPath2);
    ui->lineEdit_3->setText(mSelDirPath3);

    QScrollBar* pScrollBar1 = ui->tableWidget_1->verticalScrollBar();
    QScrollBar* pScrollBar2 = ui->tableWidget_2->verticalScrollBar();
    QScrollBar* pScrollBar3 = ui->tableWidget_3->verticalScrollBar();
    QScrollBar* pScrollBar4 = ui->tableWidget_4->verticalScrollBar();
    QObject::connect(pScrollBar1, SIGNAL(valueChanged(int)), pScrollBar2, SLOT(setValue(int)));
    QObject::connect(pScrollBar2, SIGNAL(valueChanged(int)), pScrollBar1, SLOT(setValue(int)));
    QObject::connect(pScrollBar3, SIGNAL(valueChanged(int)), pScrollBar3, SLOT(setValue(int)));
    QObject::connect(pScrollBar4, SIGNAL(valueChanged(int)), pScrollBar4, SLOT(setValue(int)));

    this->resetTabPage(1);
    this->resetTabPage(2);
    this->resetTabPage(3);
}

PatchMakerWindow::~PatchMakerWindow()
{
    delete ui;
}

void PatchMakerWindow::onOpenAboutDialog()
{
    if(NULL != mAboutDlg)
    {
        delete mAboutDlg;
        mAboutDlg = NULL;
    }
    mAboutDlg = new AboutDialog(this);
    mAboutDlg->show();
}

void PatchMakerWindow::onAboutDialogResult(bool ok)
{
    if(ok && (NULL != mAboutDlg))
    {
        delete mAboutDlg;
        mAboutDlg = NULL;
    }
}

void PatchMakerWindow::onBrowseBtn1Clicked()
{
    this->onSelectDirectory(1);
}

void PatchMakerWindow::onBrowseBtn2Clicked()
{
    this->onSelectDirectory(2);
}

void PatchMakerWindow::onBrowseBtn3Clicked()
{
    this->onSelectDirectory(3);
}

void PatchMakerWindow::onBrowseBtn4Clicked()
{
    QDir dir3(mSelDirPath3);
    if(mSelDirPath3 == "" || !dir3.exists())
    {
        qDebug() << "dir[" << mSelDirPath3 << "] dos not exist!";
        return;
    }
    this->setEnabled(false);
    ui->mOutputTabBox->setCurrentIndex(0);
    this->resetTabPage(1);
    FileComparison fileCompObject;
    const FileCompResultList& fileList = fileCompObject.scanAndComp(mSelDirPath1, mSelDirPath2);
    this->createScanAndMD5TableView(fileList);
    mOldVersionsStr = fileCompObject.oldPathName();
    mNewVersionsStr = fileCompObject.newPathName();
    if(mOldVersionsStr == "")
    {
        QDir dir1(mSelDirPath1);
        if(mSelDirPath1 == "" || !dir1.exists())
        {
            qDebug() << "选中的版本目录目录错误[" << mSelDirPath1 << "]!";
            QMessageBox::question(this, "Show Qt", "选中的版本目录目录错误，检查路径是否存在!",
                QMessageBox::Ok, QMessageBox::Ok);

            return;
        }
    }
    if(mNewVersionsStr == "")
    {
        QDir dir2(mSelDirPath2);
        if(mSelDirPath2 == "" || !dir2.exists())
        {
            qDebug() << "选中的版本目录目录错误[" << mSelDirPath2 << "]!";
            QMessageBox::question(this, "Show Qt", "选中的版本目录目录错误，检查路径是否存在!",
                QMessageBox::Ok, QMessageBox::Ok);
            return;
        }
    }
    this->createMD5ListFile(fileList, mOldVersionsStr, mNewVersionsStr);
    this->setEnabled(true);
}

void PatchMakerWindow::onBrowseBtn5Clicked()
{
    this->setEnabled(false);
    this->resetTabPage(2);
    ui->mOutputTabBox->setCurrentIndex(1);
    this->createPatch(mPatchListFile, mOldVersionsStr, mNewVersionsStr);
    this->setEnabled(true);
}

void PatchMakerWindow::onBrowseBtn6Clicked()
{
    ZipCompress::uncompress("D:/football_manager/ios/PatchMaker/Patch/000002-000003.pak", "D:/football_manager/ios/PatchMaker/Patch/2-3");

    this->resetTabPage(3);
    ui->mOutputTabBox->setCurrentIndex(2);
}

void PatchMakerWindow::onLineEdit1TextChangen(QString text)
{
    mSelDirPath1 = text;
}

void PatchMakerWindow::onLineEdit2TextChangen(QString text)
{
    mSelDirPath2 = text;
}

void PatchMakerWindow::onLineEdit3TextChangen(QString text)
{
    mSelDirPath3 = text;
}

void PatchMakerWindow::createPatch(const FileCompResultList& fileList, const QString& oldVerStr,
                                   const QString& newVerStr, const char* path)
{
    QString newVerRootDir = mSelDirPath3 + '/' + "Versions/" + newVerStr;
    QDir newVerPath(newVerRootDir);
    if(!newVerPath.exists())
    {
        qDebug() << "(createPatch): dir[" << newVerPath << "] dos not exist!";
        return;
    }
    QString patchName = oldVerStr + '-' + newVerStr;
    QString patchRootPath = mSelDirPath3 + "/" + path;
    QString patchFileName = patchRootPath + '/' + patchName + ".pak";
    QString tempRootPath = mSelDirPath3 + "/" + "_temp/" + patchName;
    QString patchFileListFN = tempRootPath + "/" + "filelist";
    QDir::current().mkdir(patchRootPath);
    QDir::current().mkdir(mSelDirPath3 + "/" + "_temp");
    QDir::current().mkdir(tempRootPath);

    QFile fileListFile(patchFileListFN);
    fileListFile.open(QIODevice::WriteOnly);
    int newVersNum = newVerStr.toInt();
    int canPatch = 1;
    QString canUpdateFileName = newVerRootDir + "/update.full.unused";
    QFile canUpdateFlag(canUpdateFileName);
    if(canUpdateFlag.exists())
    {
        canPatch = 0;
    }
    QString versStatus;
    versStatus.sprintf("%d\t%d\r\n", newVersNum, canPatch);
    fileListFile.write(versStatus.toStdString().c_str(), versStatus.size());
    for(int i = 0; i < fileList.size(); ++ i)
    {
        if("filelist" == fileList[i].fileName)
            continue;
        QStringList tmpFileName = fileList[i].fileName.split('/');
        QString tmpDirName = tempRootPath;
        for(int i = 0; i < tmpFileName.size()-1; ++ i)
        {
            tmpDirName.append('/');
            tmpDirName.append(tmpFileName[i]);
            QDir::current().mkdir(tmpDirName);
        }
        QString line = fileList[i].fileName + '\t';
        QString fileSrcName = newVerRootDir + '/' + fileList[i].fileName;
        QString fileDstName = tempRootPath + '/' + fileList[i].fileName;
        if(canUpdateFileName == fileSrcName)
            continue;
        if(fileList[i].resultType == FileCompResultType::Modify)
        {
            line.append("m\r\n");
            QFile dstFileExist(fileDstName);
            while(dstFileExist.exists())
            {
                dstFileExist.remove(fileDstName);
                dstFileExist.setFileName(fileDstName);
            }
            QFile::copy(fileSrcName, fileDstName);
        }
        else if(fileList[i].resultType == FileCompResultType::Removed)
        {
            line.append("r\r\n");
        }
        else if(fileList[i].resultType == FileCompResultType::Added)
        {
            line.append("a\r\n");
            QFile dstFileExist(fileDstName);
            while(dstFileExist.exists())
            {
                dstFileExist.remove(fileDstName);
                dstFileExist.setFileName(fileDstName);
            }
            QFile::copy(fileSrcName, fileDstName);
        }
        fileListFile.write(line.toStdString().c_str(), line.size());
    }
    fileListFile.close();

    ZipCompress::compress(tempRootPath.toStdString().c_str(), patchFileName.toStdString().c_str());
}

void PatchMakerWindow::createMD5ListFile(const FileCompResultList& fileList, const QString& oldVerStr,
                                         const QString& newVerStr, const char* path)
{
    QString md5FileRootPath = mSelDirPath3 + "/" + path;
    QString oldVerMD5FileName = md5FileRootPath + "/" + oldVerStr + ".md5";
    QString newVerMD5FileName = md5FileRootPath + "/" + newVerStr + ".md5";
    QDir::current().mkdir(md5FileRootPath);

    QFile oldFile(oldVerMD5FileName);
    QFile newFile(newVerMD5FileName);
    oldFile.open(QIODevice::WriteOnly);
    newFile.open(QIODevice::WriteOnly);
    for(int i = 0; i < fileList.size(); ++ i)
    {
        QString file1md5 = fileList[i].file1MD5;
        QString file2md5 = fileList[i].file2MD5;
        if(file1md5.size() > 0)
        {
            QString line = fileList[i].fileName + '\t' + file1md5 + "\r\n";
            oldFile.write(line.toStdString().c_str(), line.size());
        }
        if(file2md5.size() > 0)
        {
            QString line = fileList[i].fileName + '\t' + file2md5 + "\r\n";
            newFile.write(line.toStdString().c_str(), line.size());
        }
        if(fileList[i].resultType != FileCompResultType::None)
            mPatchListFile.append(fileList[i]);
    }
    oldFile.close();
    newFile.close();
}

void PatchMakerWindow::createScanAndMD5TableView(const FileCompResultList& fileList)
{
    typedef struct TableRow
    {
        TableRow()
        {
            col1 = col2 = col3 = NULL;
        }

        QTableWidgetItem* col1;
        QTableWidgetItem* col2;
        QTableWidgetItem* col3;
    };
    QList<TableRow> table1RowList;
    QList<TableRow> table2RowList;

    for(int i = 0; i < fileList.size(); ++ i)
    {
        TableRow table1Row;
        TableRow table2Row;
        if(fileList[i].resultType == FileCompResultType::Removed)
        {
            table1Row.col1 = new QTableWidgetItem(fileList[i].fileName);
            table2Row.col1 = new QTableWidgetItem("----");
            table1Row.col2 = new QTableWidgetItem(fileList[i].file1MD5);
            table2Row.col2 = new QTableWidgetItem("----");
            table1Row.col3 = new QTableWidgetItem("移除文件");
            table2Row.col3 = new QTableWidgetItem("移除文件");
            QLinearGradient linearGrad(QPointF(0, 0), QPointF(200, 200));
            linearGrad.setColorAt(0, Qt::darkRed);
            linearGrad.setColorAt(1, Qt::red);
            QBrush brush(linearGrad);
            table1Row.col1->setBackground(brush);
            table2Row.col1->setBackground(brush);
        }
        else if(fileList[i].resultType == FileCompResultType::Added)
        {
            table1Row.col1 = new QTableWidgetItem("----");
            table2Row.col1 = new QTableWidgetItem(fileList[i].fileName);
            table1Row.col2 = new QTableWidgetItem("----");
            table2Row.col2 = new QTableWidgetItem(fileList[i].file2MD5);
            table1Row.col3 = new QTableWidgetItem("新增文件");
            table2Row.col3 = new QTableWidgetItem("新增文件");
            QLinearGradient linearGrad(QPointF(0, 0), QPointF(200, 200));
            linearGrad.setColorAt(0, Qt::darkGreen);
            linearGrad.setColorAt(1, Qt::green);
            QBrush brush(linearGrad);
            table1Row.col1->setBackground(brush);
            table2Row.col1->setBackground(brush);
        }
        else
        {
            if(fileList[i].resultType == FileCompResultType::Modify)
            {
                table1Row.col1 = new QTableWidgetItem(fileList[i].fileName);
                table2Row.col1 = new QTableWidgetItem(fileList[i].fileName);
                table1Row.col2 = new QTableWidgetItem(fileList[i].file1MD5);
                table2Row.col2 = new QTableWidgetItem(fileList[i].file2MD5);
                QLinearGradient linearGrad(QPointF(0, 0), QPointF(200, 200));
                linearGrad.setColorAt(0, Qt::darkYellow);
                linearGrad.setColorAt(1, Qt::yellow);
                linearGrad.setColorAt(2, Qt::yellow);
                QBrush brush(linearGrad);
                table1Row.col1->setBackground(brush);
                table2Row.col1->setBackground(brush);

                linearGrad.setColorAt(0, Qt::yellow);
                linearGrad.setColorAt(1, Qt::yellow);
                brush = QBrush(linearGrad);
                table1Row.col2->setBackground(brush);
                table2Row.col2->setBackground(brush);
                table1Row.col3 = new QTableWidgetItem("文件改动");
                table2Row.col3 = new QTableWidgetItem("文件改动");
            }
            else
            {
                continue;
            }
        }
        table1RowList.append(table1Row);
        table2RowList.append(table2Row);
    }
    ui->tableWidget_1->setRowCount(table1RowList.size());
    ui->tableWidget_2->setRowCount(table2RowList.size());
    for(int i = 0; i < table1RowList.size(); ++ i)
    {
        TableRow table1Row = table1RowList.at(i);
        TableRow table2Row = table2RowList.at(i);
        ui->tableWidget_1->setItem(i, 0, table1Row.col1);
        ui->tableWidget_2->setItem(i, 0, table2Row.col1);
        ui->tableWidget_1->setItem(i, 1, table1Row.col2);
        ui->tableWidget_2->setItem(i, 1, table2Row.col2);
        ui->tableWidget_1->setItem(i, 2, table1Row.col3);
        ui->tableWidget_2->setItem(i, 2, table2Row.col3);
    }
}

void PatchMakerWindow::resetTabPage(int tab)
{
    QStringList headerText;
    headerText << "文件名" << "MD5码" << "文件状态";
    if(tab == 1)
    {
        ui->tableWidget_1->clear();
        ui->tableWidget_2->clear();
        ui->tableWidget_1->setColumnCount(3);
        ui->tableWidget_1->setHorizontalHeaderLabels(headerText);
        ui->tableWidget_2->setColumnCount(3);
        ui->tableWidget_2->setHorizontalHeaderLabels(headerText);
    }
    else if(tab == 2)
    {
        ui->tableWidget_3->clear();
        ui->tableWidget_4->clear();
        ui->tableWidget_3->setColumnCount(3);
        ui->tableWidget_3->setHorizontalHeaderLabels(headerText);
        ui->tableWidget_4->setColumnCount(3);
        ui->tableWidget_4->setHorizontalHeaderLabels(headerText);
    }
    else if(tab == 3)
    {
        ui->listView_5->setModel(NULL);
    }
}

void PatchMakerWindow::onSelectDirectory(int btnNum)
{
    QFileDialog* fd = new QFileDialog(this);
    fd->setFileMode(QFileDialog::DirectoryOnly);
    if ( fd->exec() == QDialog::Accepted )
    {
        switch(btnNum)
        {
        case 1:
            mSelDirPath1 = fd->selectedFiles()[0];
            ui->lineEdit_1->setText(mSelDirPath1);
            break;
        case 2:
            mSelDirPath2 = fd->selectedFiles()[0];
            ui->lineEdit_2->setText(mSelDirPath2);
            break;
        case 3:
            mSelDirPath3 = fd->selectedFiles()[0];
            ui->lineEdit_3->setText(mSelDirPath3);
            break;
        }
    }
    else
    {
        QMessageBox::StandardButton rb = QMessageBox::question(this, "Show Qt", "未选中目录，是否清空之前所选目录？",
                                                               QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
        if(rb == QMessageBox::Yes)
        {
            switch(btnNum)
            {
            case 1:
                mSelDirPath1 = "";
                ui->lineEdit_1->setText(mSelDirPath1);
                break;
            case 2:
                mSelDirPath2 = "";
                ui->lineEdit_2->setText(mSelDirPath2);
                break;
            case 3:
                mSelDirPath3 = "";
                ui->lineEdit_3->setText(mSelDirPath3);
                break;
            }
        }
    }
}
