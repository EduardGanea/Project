#ifndef DIALOG6_H
#define DIALOG6_H

#include <QDialog>

namespace Ui {
class Dialog6;
}

class Dialog6 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog6(QWidget *parent = nullptr);
    ~Dialog6();

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
    Ui::Dialog6 *ui;
};

#endif // DIALOG6_H
