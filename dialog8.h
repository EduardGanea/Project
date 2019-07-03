#ifndef DIALOG8_H
#define DIALOG8_H

#include <QDialog>

namespace Ui {
class Dialog8;
}

class Dialog8 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog8(QWidget *parent = nullptr);
    ~Dialog8();

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
    Ui::Dialog8 *ui;
};

#endif // DIALOG8_H
