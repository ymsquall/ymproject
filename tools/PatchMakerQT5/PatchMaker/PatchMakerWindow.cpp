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
#include "FileComparison.h"

PatchMakerWindow::PatchMakerWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PatchMakerWindow)
{
    mAboutDlg = NULL;
    ui->setupUi(this);

    QStringList headerText;
    headerText << "文件名" << "文件MD5码" << "文件状态";
    ui->tableWidget_1->setColumnCount(3);
    ui->tableWidget_1->setHorizontalHeaderLabels(headerText);
    ui->tableWidget_2->setColumnCount(3);
    ui->tableWidget_2->setHorizontalHeaderLabels(headerText);
    ui->tableWidget_3->setColumnCount(3);
    ui->tableWidget_3->setHorizontalHeaderLabels(headerText);
    ui->tableWidget_4->setColumnCount(3);
    ui->tableWidget_4->setHorizontalHeaderLabels(headerText);
    QScrollBar* pScrollBar1 = ui->tableWidget_1->verticalScrollBar();
    QScrollBar* pScrollBar2 = ui->tableWidget_2->verticalScrollBar();
    QScrollBar* pScrollBar3 = ui->tableWidget_3->verticalScrollBar();
    QScrollBar* pScrollBar4 = ui->tableWidget_4->verticalScrollBar();
    QObject::connect(pScrollBar1, SIGNAL(valueChanged(int)), pScrollBar2, SLOT(setValue(int)));
    QObject::connect(pScrollBar2, SIGNAL(valueChanged(int)), pScrollBar1, SLOT(setValue(int)));
    QObject::connect(pScrollBar3, SIGNAL(valueChanged(int)), pScrollBar3, SLOT(setValue(int)));
    QObject::connect(pScrollBar4, SIGNAL(valueChanged(int)), pScrollBar4, SLOT(setValue(int)));
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
    mOldVersFileList.clear();
    mNewVersFileList.clear();
    ui->tableWidget_1->clear();
    ui->tableWidget_2->clear();
    ui->mOutputTabBox->setCurrentIndex(0);
    QDir dir1(mSelDirPath1);
    if(mSelDirPath1 == "" || !dir1.exists())
    {
        qDebug() << "dir[" << mSelDirPath1 << "] dos not exist!";
        return;
    }
    QDir dir2(mSelDirPath2);
    if(mSelDirPath2 == "" || !dir2.exists())
    {
        qDebug() << "dir[" << mSelDirPath2 << "] dos not exist!";
        return;
    }
    FileComparison fileCompObject;
    const FileCompResultList& fileList = fileCompObject.scanAndComp(mSelDirPath1, mSelDirPath2);
    ui->tableWidget_1->setRowCount(fileList.size());
    ui->tableWidget_2->setRowCount(fileList.size());
    QStringList headerText;
    headerText << "文件名" << "MD5码" << "文件状态";
    ui->tableWidget_1->setColumnCount(3);
    ui->tableWidget_1->setHorizontalHeaderLabels(headerText);
    ui->tableWidget_2->setColumnCount(3);
    ui->tableWidget_2->setHorizontalHeaderLabels(headerText);
    for(int i = 0; i < fileList.size(); ++ i)
    {
        QTableWidgetItem* pItem1 = NULL;
        QTableWidgetItem* pItem2 = NULL;
        QTableWidgetItem* pItem1Col1 = NULL;
        QTableWidgetItem* pItem2Col1 = NULL;
        QTableWidgetItem* pItem1Col2 = NULL;
        QTableWidgetItem* pItem2Col2 = NULL;
        if(fileList[i].resultType == FileCompResultType::Removed)
        {
            pItem1 = new QTableWidgetItem(fileList[i].fileName);
            pItem2 = new QTableWidgetItem("");
            pItem1Col2 = new QTableWidgetItem("移除文件");
            pItem2Col2 = new QTableWidgetItem("移除文件");
            QLinearGradient linearGrad(QPointF(0, 0), QPointF(200, 200));
            linearGrad.setColorAt(0, Qt::darkRed);
            linearGrad.setColorAt(1, Qt::red);
            QBrush brush(linearGrad);
            pItem1->setBackground(brush);
            pItem2->setBackground(brush);
        }
        else if(fileList[i].resultType == FileCompResultType::Added)
        {
            pItem1 = new QTableWidgetItem("");
            pItem2 = new QTableWidgetItem(fileList[i].fileName);
            pItem1Col2 = new QTableWidgetItem("新增文件");
            pItem2Col2 = new QTableWidgetItem("新增文件");
            QLinearGradient linearGrad(QPointF(0, 0), QPointF(200, 200));
            linearGrad.setColorAt(0, Qt::darkGreen);
            linearGrad.setColorAt(1, Qt::green);
            QBrush brush(linearGrad);
            pItem1->setBackground(brush);
            pItem2->setBackground(brush);
        }
        else
        {
            pItem1 = new QTableWidgetItem(fileList[i].fileName);
            pItem2 = new QTableWidgetItem(fileList[i].fileName);
            pItem1Col1 = new QTableWidgetItem(fileList[i].file1MD5);
            pItem2Col1 = new QTableWidgetItem(fileList[i].file2MD5);
            pItem1Col2 = new QTableWidgetItem("文件改动");
            pItem2Col2 = new QTableWidgetItem("文件改动");
            if(fileList[i].resultType == FileCompResultType::Modify)
            {
                QLinearGradient linearGrad(QPointF(0, 0), QPointF(200, 200));
                linearGrad.setColorAt(0, Qt::darkYellow);
                linearGrad.setColorAt(1, Qt::yellow);
                linearGrad.setColorAt(2, Qt::yellow);
                QBrush brush(linearGrad);
                pItem1->setBackground(brush);
                pItem2->setBackground(brush);

                linearGrad.setColorAt(0, Qt::yellow);
                linearGrad.setColorAt(1, Qt::yellow);
                brush = QBrush(linearGrad);
                pItem1Col1->setBackground(brush);
                pItem2Col1->setBackground(brush);
            }
            ui->tableWidget_1->setItem(i, 1, pItem1Col1);
            ui->tableWidget_2->setItem(i, 1, pItem2Col1);
        }
        ui->tableWidget_1->setItem(i, 0, pItem1);
        ui->tableWidget_2->setItem(i, 0, pItem2);
        ui->tableWidget_1->setItem(i, 2, pItem1Col2);
        ui->tableWidget_2->setItem(i, 2, pItem2Col2);
    }
}

void PatchMakerWindow::onBrowseBtn5Clicked()
{
    ui->tableWidget_3->clear();
    ui->tableWidget_4->clear();
    ui->mOutputTabBox->setCurrentIndex(1);
}

void PatchMakerWindow::onBrowseBtn6Clicked()
{
    ui->listView_5->setModel(NULL);
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
