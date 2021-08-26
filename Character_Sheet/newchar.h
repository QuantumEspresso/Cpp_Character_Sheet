#ifndef NEWCHAR_H
#define NEWCHAR_H
//#include <QString>
#include <QDialog>

namespace Ui {
class NewChar;
}

class NewChar : public QDialog
{
    Q_OBJECT

public:
    explicit NewChar(QWidget *parent = 0);
    ~NewChar();

private slots:


    void on_lineEdit_textChanged(const QString &arg1);

    void on_buttonBox_accepted();

private:
    Ui::NewChar *ui;
};

#endif // NEWCHAR_H
