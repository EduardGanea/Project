#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include "dialog2.h"
#include "dialog3.h"
#include "dialog4.h"
#include "dialog5.h"
#include "dialog6.h"
#include "dialog7.h"
#include "dialog8.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Pair1_clicked()
{
    Dialog dialog;
    dialog.setModal(true);
    dialog.exec();
}

void MainWindow::on_Pair2_clicked()
{
    Dialog2 dialog;
    dialog.setModal(true);
    dialog.exec();

}

void MainWindow::on_Pair3_clicked()
{
    Dialog3 dialog;
    dialog.setModal(true);
    dialog.exec();
}

void MainWindow::on_Pair4_clicked()
{
    Dialog4 dialog;
    dialog.setModal(true);
    dialog.exec();
}

void MainWindow::on_Pair5_clicked()
{
    Dialog5 dialog;
    dialog.setModal(true);
    dialog.exec();
}

void MainWindow::on_Pair6_clicked()
{
    Dialog6 dialog;
    dialog.setModal(true);
    dialog.exec();
}

void MainWindow::on_Pair7_clicked()
{
    Dialog7 dialog;
    dialog.setModal(true);
    dialog.exec();
}

void MainWindow::on_Pair8_clicked()
{
    Dialog8 dialog;
    dialog.setModal(true);
    dialog.exec();
}
