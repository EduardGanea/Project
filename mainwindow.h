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
    void on_Pair1_clicked();

    void on_Pair2_clicked();

    void on_Pair3_clicked();

    void on_Pair4_clicked();

    void on_Pair5_clicked();

    void on_Pair6_clicked();

    void on_Pair7_clicked();

    void on_Pair8_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
