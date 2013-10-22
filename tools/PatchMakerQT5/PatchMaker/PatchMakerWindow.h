#ifndef PATCHMAKERWINDOW_H
#define PATCHMAKERWINDOW_H

#include <QMainWindow>

namespace Ui {
class PatchMakerWindow;
}
class AboutDialog;

class PatchMakerWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit PatchMakerWindow(QWidget *parent = 0);
    ~PatchMakerWindow();

public slots:
    void onOpenAboutDialog();
    void onAboutDialogResult(bool ok);
    void onBrowseBtnClicked();
    
private:
    Ui::PatchMakerWindow *ui;
    AboutDialog *mAboutDlg;
};

#endif // PATCHMAKERWINDOW_H
