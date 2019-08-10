#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionExit_triggered();

    void on_actionOpen_triggered();

    void on_actionRestore_triggered();

    void on_actionSave_triggered();

private:
    void initFrame();
    void initFuncsBox();
    void initStorageBox();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
