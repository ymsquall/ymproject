#ifndef PATCHMAKERWINDOW_H
#define PATCHMAKERWINDOW_H

#include <QMainWindow>
#include <QTableWidget>
#include "FileComparison.h"

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
    void resetTabPage(int tab);
    void createScanAndMD5TableView(const FileCompResultList& fileList);
    void createMD5ListFile(const FileCompResultList& fileList, const QString& oldVerStr,
                           const QString& newVerStr, const char* path="MD5List");
    void createPatch(const FileCompResultList& fileList, const QString& oldVerStr,
                     const QString& newVerStr, const char* path="Patch");
    void onSelectDirectory(int btnNum);
    
private:
    Ui::PatchMakerWindow *ui;
    AboutDialog *mAboutDlg;
    QString mSelDirPath1;
    QString mSelDirPath2;
    QString mSelDirPath3;
    QString mOldVersionsStr;
    QString mNewVersionsStr;
    FileCompResultList mPatchListFile;
};

#endif // PATCHMAKERWINDOW_H
