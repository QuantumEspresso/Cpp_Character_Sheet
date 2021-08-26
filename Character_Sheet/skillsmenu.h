#ifndef SKILLSMENU_H
#define SKILLSMENU_H

#include <QDialog>

namespace Ui {
class SkillsMenu;
}

class SkillsMenu : public QDialog
{
    Q_OBJECT

public:
    explicit SkillsMenu(QWidget *parent = 0);
    ~SkillsMenu();

private:
    Ui::SkillsMenu *ui;
};

#endif // SKILLSMENU_H
