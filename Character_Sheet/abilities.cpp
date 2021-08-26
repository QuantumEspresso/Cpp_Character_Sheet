#include "abilities.h"
#include "ui_abilities.h"

Abilities::Abilities(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Abilities)
{
    ui->setupUi(this);
}

Abilities::~Abilities()
{
    delete ui;
}
