#ifndef DIALOG4_H
#define DIALOG4_H

#include <QDialog>

namespace Ui {
class Dialog4;
}

class Dialog4 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog4(QWidget *parent = nullptr);
    ~Dialog4();

private slots:
    void on_BuyButton_clicked();

    void on_Size1_2_toggled(bool checked);

    void on_Size2_2_toggled(bool checked);


    void on_Size3_2_toggled(bool checked);

    void on_Size4_2_toggled(bool checked);

    void on_Size5_2_toggled(bool checked);

    void on_Size6_2_toggled(bool checked);

    void on_Size7_2_toggled(bool checked);

    void on_Size8_2_toggled(bool checked);

    void on_Size9_2_toggled(bool checked);

private:
    Ui::Dialog4 *ui;
};

#endif // DIALOG4_H
