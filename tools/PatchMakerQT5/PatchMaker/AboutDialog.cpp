#include "AboutDialog.h"
#include "ui_AboutDialog.h"
#include "PatchMakerWindow.h"

AboutDialog::AboutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutDialog)
{
    ui->setupUi(this);

    mParent = dynamic_cast<PatchMakerWindow*>(this->parent());
    QObject::connect(this, SIGNAL(sendDialogResult(bool)), mParent, SLOT(onAboutDialogResult(bool)));
}

AboutDialog::~AboutDialog()
{
    delete ui;
}

void AboutDialog::onOkBtnClick()
{
    emit sendDialogResult(true);
}

void AboutDialog::onCancelBtnClick()
{
    this->hide();
    emit sendDialogResult(false);
}
