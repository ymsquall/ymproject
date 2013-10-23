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

PatchMakerWindow::PatchMakerWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PatchMakerWindow)
{
    mAboutDlg = NULL;
    ui->setupUi(this);

    QScrollBar* pScrollBar1 = ui->listView_1->verticalScrollBar();
    QScrollBar* pScrollBar2 = ui->listView_2->verticalScrollBar();
    QScrollBar* pScrollBar3 = ui->listView_3->verticalScrollBar();
    QScrollBar* pScrollBar4 = ui->listView_4->verticalScrollBar();
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
    ui->listView_1->setModel(NULL);
    ui->listView_2->setModel(NULL);
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
    mOldVersFileList = Helper::getAllFilesInPath(mSelDirPath1);
    mNewVersFileList = Helper::getAllFilesInPath(mSelDirPath2);
    {
        QStandardItemModel* pItemsModel = new QStandardItemModel(this);
        for(int i = 0; i < mOldVersFileList.size(); ++ i)
        {
            QStandardItem* pItem = new QStandardItem(mOldVersFileList[i]);
            if(i % 2 == 1)
            {
                QLinearGradient linearGrad(QPointF(0, 0), QPointF(200, 200));
                linearGrad.setColorAt(0, Qt::darkGreen);
                linearGrad.setColorAt(1, Qt::yellow);
                QBrush brush(linearGrad);
                pItem->setBackground(brush);
            }
            pItemsModel->appendRow(pItem);
        }
        ui->listView_1->setModel(pItemsModel);
    }
    {
        QStandardItemModel* pItemsModel = new QStandardItemModel(this);
        for(int i = 0; i < mNewVersFileList.size(); ++ i)
        {
            QStandardItem* pItem = new QStandardItem(mNewVersFileList[i]);
            if(i % 2 == 1)
            {
                QLinearGradient linearGrad(QPointF(0, 0), QPointF(200, 200));
                linearGrad.setColorAt(0, Qt::darkGreen);
                linearGrad.setColorAt(1, Qt::yellow);
                QBrush brush(linearGrad);
                pItem->setBackground(brush);
            }
            pItemsModel->appendRow(pItem);
        }
        ui->listView_2->setModel(pItemsModel);
    }
}

void PatchMakerWindow::onBrowseBtn5Clicked()
{
    ui->listView_3->setModel(NULL);
    ui->listView_4->setModel(NULL);
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
