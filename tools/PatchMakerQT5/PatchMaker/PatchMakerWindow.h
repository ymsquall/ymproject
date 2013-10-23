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

    void onBrowseBtn1Clicked();
    void onBrowseBtn2Clicked();
    void onBrowseBtn3Clicked();

    void onBrowseBtn4Clicked();
    void onBrowseBtn5Clicked();
    void onBrowseBtn6Clicked();

    void onLineEdit1TextChangen(QString text);
    void onLineEdit2TextChangen(QString text);
    void onLineEdit3TextChangen(QString text);

private:
    void onSelectDirectory(int btnNum);
    
private:
    Ui::PatchMakerWindow *ui;
    AboutDialog *mAboutDlg;
    QString mSelDirPath1;
    QString mSelDirPath2;
    QString mSelDirPath3;
    QStringList mOldVersFileList;
    QStringList mNewVersFileList;
};

#endif // PATCHMAKERWINDOW_H
