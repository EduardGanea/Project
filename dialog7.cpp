#include "dialog7.h"
#include "ui_dialog7.h"
#include <QPixmap>
#include <QMessageBox>
Dialog7::Dialog7(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog7)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/a/Desktop/New folder (6)/vans31");
    int w = ui->label->width();
    int h = ui->label->height();
    ui->label->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->BuyButton->setDisabled(true);
    ui->Size1->setCheckable(true);
    ui->Size2->setCheckable(true);
    ui->Size3->setCheckable(true);
    ui->Size4->setCheckable(true);
    ui->Size5->setCheckable(true);
    ui->Size6->setCheckable(true);
    ui->Size7->setCheckable(true);
    ui->Size8->setCheckable(true);
    ui->Size9->setCheckable(true);
}

Dialog7::~Dialog7()
{
    delete ui;
}

void Dialog7::on_BuyButton_clicked()
{
    QMessageBox::about(this,"","The purchase was made");
    close();
}

void Dialog7::on_Size1_toggled(bool checked)
{
    if (checked){
        ui->BuyButton->setDisabled(false);
        ui->Size2->setDisabled(true);
        ui->Size3->setDisabled(true);
        ui->Size4->setDisabled(true);
        ui->Size5->setDisabled(true);
        ui->Size6->setDisabled(true);
        ui->Size7->setDisabled(true);
        ui->Size8->setDisabled(true);
        ui->Size9->setDisabled(true);
    }
    else {
        ui->BuyButton->setDisabled(true);
        ui->Size2->setDisabled(false);
        ui->Size3->setDisabled(false);
        ui->Size4->setDisabled(false);
        ui->Size5->setDisabled(false);
        ui->Size6->setDisabled(false);
        ui->Size7->setDisabled(false);
        ui->Size8->setDisabled(false);
        ui->Size9->setDisabled(false);
    }
}

void Dialog7::on_Size2_toggled(bool checked)
{
    if (checked){
        ui->BuyButton->setDisabled(false);
        ui->Size1->setDisabled(true);
        ui->Size3->setDisabled(true);
        ui->Size4->setDisabled(true);
        ui->Size5->setDisabled(true);
        ui->Size6->setDisabled(true);
        ui->Size7->setDisabled(true);
        ui->Size8->setDisabled(true);
        ui->Size9->setDisabled(true);
    }
    else {
        ui->BuyButton->setDisabled(true);
        ui->Size1->setDisabled(false);
        ui->Size3->setDisabled(false);
        ui->Size4->setDisabled(false);
        ui->Size5->setDisabled(false);
        ui->Size6->setDisabled(false);
        ui->Size7->setDisabled(false);
        ui->Size8->setDisabled(false);
        ui->Size9->setDisabled(false);
    }
}

void Dialog7::on_Size3_toggled(bool checked)
{
    if (checked){
        ui->BuyButton->setDisabled(false);
        ui->Size1->setDisabled(true);
        ui->Size2->setDisabled(true);
        ui->Size4->setDisabled(true);
        ui->Size5->setDisabled(true);
        ui->Size6->setDisabled(true);
        ui->Size7->setDisabled(true);
        ui->Size8->setDisabled(true);
        ui->Size9->setDisabled(true);
    }
    else {
        ui->BuyButton->setDisabled(true);
        ui->Size1->setDisabled(false);
        ui->Size2->setDisabled(false);
        ui->Size4->setDisabled(false);
        ui->Size5->setDisabled(false);
        ui->Size6->setDisabled(false);
        ui->Size7->setDisabled(false);
        ui->Size8->setDisabled(false);
        ui->Size9->setDisabled(false);
    }
}


void Dialog7::on_Size4_toggled(bool checked)
{
    if (checked){
        ui->BuyButton->setDisabled(false);
        ui->Size1->setDisabled(true);
        ui->Size2->setDisabled(true);
        ui->Size3->setDisabled(true);
        ui->Size5->setDisabled(true);
        ui->Size6->setDisabled(true);
        ui->Size7->setDisabled(true);
        ui->Size8->setDisabled(true);
        ui->Size9->setDisabled(true);
    }
    else {
        ui->BuyButton->setDisabled(true);
        ui->Size1->setDisabled(false);
        ui->Size2->setDisabled(false);
        ui->Size3->setDisabled(false);
        ui->Size5->setDisabled(false);
        ui->Size6->setDisabled(false);
        ui->Size7->setDisabled(false);
        ui->Size8->setDisabled(false);
        ui->Size9->setDisabled(false);
    }
}

void Dialog7::on_Size5_toggled(bool checked)
{
    if (checked){
        ui->BuyButton->setDisabled(false);
        ui->Size1->setDisabled(true);
        ui->Size2->setDisabled(true);
        ui->Size3->setDisabled(true);
        ui->Size4->setDisabled(true);
        ui->Size6->setDisabled(true);
        ui->Size7->setDisabled(true);
        ui->Size8->setDisabled(true);
        ui->Size9->setDisabled(true);
    }
    else {
        ui->BuyButton->setDisabled(true);
        ui->Size1->setDisabled(false);
        ui->Size2->setDisabled(false);
        ui->Size3->setDisabled(false);
        ui->Size4->setDisabled(false);
        ui->Size6->setDisabled(false);
        ui->Size7->setDisabled(false);
        ui->Size8->setDisabled(false);
        ui->Size9->setDisabled(false);
    }
}

void Dialog7::on_Size6_toggled(bool checked)
{
    if (checked){
        ui->BuyButton->setDisabled(false);
        ui->Size1->setDisabled(true);
        ui->Size2->setDisabled(true);
        ui->Size3->setDisabled(true);
        ui->Size4->setDisabled(true);
        ui->Size5->setDisabled(true);
        ui->Size7->setDisabled(true);
        ui->Size8->setDisabled(true);
        ui->Size9->setDisabled(true);
    }
    else {
        ui->BuyButton->setDisabled(true);
        ui->Size1->setDisabled(false);
        ui->Size2->setDisabled(false);
        ui->Size3->setDisabled(false);
        ui->Size4->setDisabled(false);
        ui->Size5->setDisabled(false);
        ui->Size7->setDisabled(false);
        ui->Size8->setDisabled(false);
        ui->Size9->setDisabled(false);
    }
}

void Dialog7::on_Size7_toggled(bool checked)
{
    if (checked){
        ui->BuyButton->setDisabled(false);
        ui->Size1->setDisabled(true);
        ui->Size2->setDisabled(true);
        ui->Size3->setDisabled(true);
        ui->Size4->setDisabled(true);
        ui->Size5->setDisabled(true);
        ui->Size6->setDisabled(true);
        ui->Size8->setDisabled(true);
        ui->Size9->setDisabled(true);
    }
    else {
        ui->BuyButton->setDisabled(true);
        ui->Size1->setDisabled(false);
        ui->Size2->setDisabled(false);
        ui->Size3->setDisabled(false);
        ui->Size4->setDisabled(false);
        ui->Size5->setDisabled(false);
        ui->Size6->setDisabled(false);
        ui->Size8->setDisabled(false);
        ui->Size9->setDisabled(false);
    }
}

void Dialog7::on_Size8_toggled(bool checked)
{
    if (checked){
        ui->BuyButton->setDisabled(false);
        ui->Size1->setDisabled(true);
        ui->Size2->setDisabled(true);
        ui->Size3->setDisabled(true);
        ui->Size4->setDisabled(true);
        ui->Size5->setDisabled(true);
        ui->Size6->setDisabled(true);
        ui->Size7->setDisabled(true);
        ui->Size9->setDisabled(true);
    }
    else {
        ui->BuyButton->setDisabled(true);
        ui->Size1->setDisabled(false);
        ui->Size2->setDisabled(false);
        ui->Size3->setDisabled(false);
        ui->Size4->setDisabled(false);
        ui->Size5->setDisabled(false);
        ui->Size6->setDisabled(false);
        ui->Size7->setDisabled(false);
        ui->Size9->setDisabled(false);
    }
}

void Dialog7::on_Size9_toggled(bool checked)
{
    if (checked){
        ui->BuyButton->setDisabled(false);
        ui->Size1->setDisabled(true);
        ui->Size2->setDisabled(true);
        ui->Size3->setDisabled(true);
        ui->Size4->setDisabled(true);
        ui->Size5->setDisabled(true);
        ui->Size6->setDisabled(true);
        ui->Size7->setDisabled(true);
        ui->Size8->setDisabled(true);
    }
    else {
        ui->BuyButton->setDisabled(true);
        ui->Size1->setDisabled(false);
        ui->Size2->setDisabled(false);
        ui->Size3->setDisabled(false);
        ui->Size4->setDisabled(false);
        ui->Size5->setDisabled(false);
        ui->Size6->setDisabled(false);
        ui->Size7->setDisabled(false);
        ui->Size8->setDisabled(false);
    }
}

