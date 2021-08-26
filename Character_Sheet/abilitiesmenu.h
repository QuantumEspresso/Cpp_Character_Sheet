#ifndef ABILITIESMENU_H
#define ABILITIESMENU_H

#include <QDialog>

namespace Ui {
class AbilitiesMenu;
}

class AbilitiesMenu : public QDialog
{
    Q_OBJECT

public:
    explicit AbilitiesMenu(QWidget *parent = 0);
    ~AbilitiesMenu();

private:
    Ui::AbilitiesMenu *ui;
};

#endif // ABILITIESMENU_H
