#include "abilitiesmenu.h"
#include "ui_abilitiesmenu.h"

AbilitiesMenu::AbilitiesMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AbilitiesMenu)
{
    ui->setupUi(this);
}

AbilitiesMenu::~AbilitiesMenu()
{
    delete ui;
}
