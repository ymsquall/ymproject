#include "PatchMakerWindow.h"
#include "ui_PatchMakerWindow.h"
#include "AboutDialog.h"
#include "ui_AboutDialog.h"

PatchMakerWindow::PatchMakerWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PatchMakerWindow)
{
    mAboutDlg = NULL;
    ui->setupUi(this);
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
