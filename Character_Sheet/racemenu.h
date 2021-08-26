#ifndef RACEMENU_H
#define RACEMENU_H

#include <QDialog>

namespace Ui {
class racemenu;
}

class racemenu : public QDialog
{
    Q_OBJECT

public:
    explicit racemenu(QWidget *parent = 0);
    ~racemenu();

private slots:
    void on_comboBox_currentIndexChanged(int index);

    void on_buttonBox_accepted();

    void on_comboBox_2_currentIndexChanged(int index);

private:
    Ui::racemenu *ui;
};

#endif // RACEMENU_H
