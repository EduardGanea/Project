#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:


    void on_BuyButton_clicked();

    void on_Size1_toggled(bool checked);

    void on_Size2_toggled(bool checked);

    void on_Size3_toggled(bool checked);

    void on_Size4_toggled(bool checked);

    void on_Size5_toggled(bool checked);

    void on_Size6_toggled(bool checked);

    void on_Size7_toggled(bool checked);

    void on_Size8_toggled(bool checked);

    void on_Size9_toggled(bool checked);

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
