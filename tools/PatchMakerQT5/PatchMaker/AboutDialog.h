#ifndef ABOUTDIALOG_H
#define ABOUTDIALOG_H

#include <QDialog>

namespace Ui {
class AboutDialog;
}
class PatchMakerWindow;

class AboutDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit AboutDialog(QWidget *parent = 0);
    ~AboutDialog();

public slots:
    void onOkBtnClick();
    void onCancelBtnClick();

signals:
   void sendDialogResult(bool ok);
    
private:
    Ui::AboutDialog *ui;
    PatchMakerWindow* mParent;
};

#endif // ABOUTDIALOG_H
