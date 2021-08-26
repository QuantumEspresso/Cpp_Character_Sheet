#include "skillsmenu.h"
#include "ui_skillsmenu.h"

SkillsMenu::SkillsMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SkillsMenu)
{
    ui->setupUi(this);
}

SkillsMenu::~SkillsMenu()
{
    delete ui;
}
