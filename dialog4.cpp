#include "dialog4.h"
#include "ui_dialog4.h"
#include <QPixmap>
#include <QMessageBox>
Dialog4::Dialog4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog4)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/a/Desktop/New folder (6)/nike11");
    int w = ui->label->width();
    int h = ui->label->height();
    ui->label->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->BuyButton->setDisabled(true);
    ui->Size1_2->setCheckable(true);
    ui->Size2_2->setCheckable(true);
    ui->Size3_2->setCheckable(true);
    ui->Size4_2->setCheckable(true);
    ui->Size5_2->setCheckable(true);
    ui->Size6_2->setCheckable(true);
    ui->Size7_2->setCheckable(true);
    ui->Size8_2->setCheckable(true);
    ui->Size9_2->setCheckable(true);
}

Dialog4::~Dialog4()
{
    delete ui;
}

void Dialog4::on_BuyButton_clicked()
{
    QMessageBox::about(this,"","The purchase was made");
    close();
}

void Dialog4::on_Size1_2_toggled(bool checked)
{
    if (checked){
        ui->BuyButton->setDisabled(false);
        ui->Size2_2->setDisabled(true);
        ui->Size3_2->setDisabled(true);
        ui->Size4_2->setDisabled(true);
        ui->Size5_2->setDisabled(true);
        ui->Size6_2->setDisabled(true);
        ui->Size7_2->setDisabled(true);
        ui->Size8_2->setDisabled(true);
        ui->Size9_2->setDisabled(true);
    }
    else {
        ui->BuyButton->setDisabled(true);
        ui->Size2_2->setDisabled(false);
        ui->Size3_2->setDisabled(false);
        ui->Size4_2->setDisabled(false);
        ui->Size5_2->setDisabled(false);
        ui->Size6_2->setDisabled(false);
        ui->Size7_2->setDisabled(false);
        ui->Size8_2->setDisabled(false);
        ui->Size9_2->setDisabled(false);
    }
}


void Dialog4::on_Size2_2_toggled(bool checked)
{
    if (checked){
        ui->BuyButton->setDisabled(false);
        ui->Size1_2->setDisabled(true);
        ui->Size3_2->setDisabled(true);
        ui->Size4_2->setDisabled(true);
        ui->Size5_2->setDisabled(true);
        ui->Size6_2->setDisabled(true);
        ui->Size7_2->setDisabled(true);
        ui->Size8_2->setDisabled(true);
        ui->Size9_2->setDisabled(true);
    }
    else {
        ui->BuyButton->setDisabled(true);
        ui->Size1_2->setDisabled(false);
        ui->Size3_2->setDisabled(false);
        ui->Size4_2->setDisabled(false);
        ui->Size5_2->setDisabled(false);
        ui->Size6_2->setDisabled(false);
        ui->Size7_2->setDisabled(false);
        ui->Size8_2->setDisabled(false);
        ui->Size9_2->setDisabled(false);
    }
}


void Dialog4::on_Size3_2_toggled(bool checked)
{
    if (checked){
        ui->BuyButton->setDisabled(false);
        ui->Size1_2->setDisabled(true);
        ui->Size2_2->setDisabled(true);
        ui->Size4_2->setDisabled(true);
        ui->Size5_2->setDisabled(true);
        ui->Size6_2->setDisabled(true);
        ui->Size7_2->setDisabled(true);
        ui->Size8_2->setDisabled(true);
        ui->Size9_2->setDisabled(true);
    }
    else {
        ui->BuyButton->setDisabled(true);
        ui->Size1_2->setDisabled(false);
        ui->Size2_2->setDisabled(false);
        ui->Size4_2->setDisabled(false);
        ui->Size5_2->setDisabled(false);
        ui->Size6_2->setDisabled(false);
        ui->Size7_2->setDisabled(false);
        ui->Size8_2->setDisabled(false);
        ui->Size9_2->setDisabled(false);
    }
}


void Dialog4::on_Size4_2_toggled(bool checked)
{
    if (checked){
        ui->BuyButton->setDisabled(false);
        ui->Size1_2->setDisabled(true);
        ui->Size2_2->setDisabled(true);
        ui->Size3_2->setDisabled(true);
        ui->Size5_2->setDisabled(true);
        ui->Size6_2->setDisabled(true);
        ui->Size7_2->setDisabled(true);
        ui->Size8_2->setDisabled(true);
        ui->Size9_2->setDisabled(true);
    }
    else {
        ui->BuyButton->setDisabled(true);
        ui->Size1_2->setDisabled(false);
        ui->Size2_2->setDisabled(false);
        ui->Size3_2->setDisabled(false);
        ui->Size5_2->setDisabled(false);
        ui->Size6_2->setDisabled(false);
        ui->Size7_2->setDisabled(false);
        ui->Size8_2->setDisabled(false);
        ui->Size9_2->setDisabled(false);
    }
}


void Dialog4::on_Size5_2_toggled(bool checked)
{
    if (checked){
        ui->BuyButton->setDisabled(false);
        ui->Size1_2->setDisabled(true);
        ui->Size2_2->setDisabled(true);
        ui->Size3_2->setDisabled(true);
        ui->Size4_2->setDisabled(true);
        ui->Size6_2->setDisabled(true);
        ui->Size7_2->setDisabled(true);
        ui->Size8_2->setDisabled(true);
        ui->Size9_2->setDisabled(true);
    }
    else {
        ui->BuyButton->setDisabled(true);
        ui->Size1_2->setDisabled(false);
        ui->Size2_2->setDisabled(false);
        ui->Size3_2->setDisabled(false);
        ui->Size4_2->setDisabled(false);
        ui->Size6_2->setDisabled(false);
        ui->Size7_2->setDisabled(false);
        ui->Size8_2->setDisabled(false);
        ui->Size9_2->setDisabled(false);
    }
}

void Dialog4::on_Size6_2_toggled(bool checked)
{
    if (checked){
        ui->BuyButton->setDisabled(false);
        ui->Size1_2->setDisabled(true);
        ui->Size2_2->setDisabled(true);
        ui->Size3_2->setDisabled(true);
        ui->Size4_2->setDisabled(true);
        ui->Size5_2->setDisabled(true);
        ui->Size7_2->setDisabled(true);
        ui->Size8_2->setDisabled(true);
        ui->Size9_2->setDisabled(true);
    }
    else {
        ui->BuyButton->setDisabled(true);
        ui->Size1_2->setDisabled(false);
        ui->Size2_2->setDisabled(false);
        ui->Size3_2->setDisabled(false);
        ui->Size4_2->setDisabled(false);
        ui->Size5_2->setDisabled(false);
        ui->Size7_2->setDisabled(false);
        ui->Size8_2->setDisabled(false);
        ui->Size9_2->setDisabled(false);
    }
}


void Dialog4::on_Size7_2_toggled(bool checked)
{
    if (checked){
        ui->BuyButton->setDisabled(false);
        ui->Size1_2->setDisabled(true);
        ui->Size2_2->setDisabled(true);
        ui->Size3_2->setDisabled(true);
        ui->Size4_2->setDisabled(true);
        ui->Size5_2->setDisabled(true);
        ui->Size6_2->setDisabled(true);
        ui->Size8_2->setDisabled(true);
        ui->Size9_2->setDisabled(true);
    }
    else {
        ui->BuyButton->setDisabled(true);
        ui->Size1_2->setDisabled(false);
        ui->Size2_2->setDisabled(false);
        ui->Size3_2->setDisabled(false);
        ui->Size4_2->setDisabled(false);
        ui->Size5_2->setDisabled(false);
        ui->Size6_2->setDisabled(false);
        ui->Size8_2->setDisabled(false);
        ui->Size9_2->setDisabled(false);
    }
}

void Dialog4::on_Size8_2_toggled(bool checked)
{
    if (checked){
        ui->BuyButton->setDisabled(false);
        ui->Size1_2->setDisabled(true);
        ui->Size2_2->setDisabled(true);
        ui->Size3_2->setDisabled(true);
        ui->Size4_2->setDisabled(true);
        ui->Size5_2->setDisabled(true);
        ui->Size6_2->setDisabled(true);
        ui->Size7_2->setDisabled(true);
        ui->Size9_2->setDisabled(true);
    }
    else {
        ui->BuyButton->setDisabled(true);
        ui->Size1_2->setDisabled(false);
        ui->Size2_2->setDisabled(false);
        ui->Size3_2->setDisabled(false);
        ui->Size4_2->setDisabled(false);
        ui->Size5_2->setDisabled(false);
        ui->Size6_2->setDisabled(false);
        ui->Size7_2->setDisabled(false);
        ui->Size9_2->setDisabled(false);
    }
}

void Dialog4::on_Size9_2_toggled(bool checked)
{
    if (checked){
        ui->BuyButton->setDisabled(false);
        ui->Size1_2->setDisabled(true);
        ui->Size2_2->setDisabled(true);
        ui->Size3_2->setDisabled(true);
        ui->Size4_2->setDisabled(true);
        ui->Size5_2->setDisabled(true);
        ui->Size6_2->setDisabled(true);
        ui->Size7_2->setDisabled(true);
        ui->Size8_2->setDisabled(true);
    }
    else {
        ui->BuyButton->setDisabled(true);
        ui->Size1_2->setDisabled(false);
        ui->Size2_2->setDisabled(false);
        ui->Size3_2->setDisabled(false);
        ui->Size4_2->setDisabled(false);
        ui->Size5_2->setDisabled(false);
        ui->Size6_2->setDisabled(false);
        ui->Size7_2->setDisabled(false);
        ui->Size8_2->setDisabled(false);
    }
}
