#ifndef DIALOG2_H
#define DIALOG2_H

#include <QDialog>

namespace Ui {
class Dialog2;
}

class Dialog2 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog2(QWidget *parent = nullptr);
    ~Dialog2();

private slots:
    void on_Size1_toggled(bool checked);

    void on_BuyButton_clicked();

    void on_Size2_toggled(bool checked);

    void on_Size3_toggled(bool checked);

    void on_Size4_toggled(bool checked);

    void on_Size5_toggled(bool checked);

    void on_Size6_toggled(bool checked);

    void on_Size7_toggled(bool checked);

    void on_Size8_toggled(bool checked);

    void on_Size9_toggled(bool checked);

private:
    Ui::Dialog2 *ui;
};

#endif // DIALOG2_H
