#ifndef ABILITIES_H
#define ABILITIES_H

#include <QDialog>

namespace Ui {
class Abilities;
}

class Abilities : public QDialog
{
    Q_OBJECT

public:
    explicit Abilities(QWidget *parent = 0);
    ~Abilities();

private:
    Ui::Abilities *ui;
};

#endif // ABILITIES_H
