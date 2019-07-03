#ifndef DIALOG5_H
#define DIALOG5_H

#include <QDialog>

namespace Ui {
class Dialog5;
}

class Dialog5 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog5(QWidget *parent = nullptr);
    ~Dialog5();

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
    Ui::Dialog5 *ui;
};

#endif // DIALOG5_H
