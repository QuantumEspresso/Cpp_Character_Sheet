#include "newchar.h"
#include "ui_newchar.h"
#include <QFile>
#include <QTextStream>

using namespace std;

QString savename;
NewChar::NewChar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewChar)
{
    ui->setupUi(this);
}

NewChar::~NewChar()
{
    delete ui;
}

void NewChar::on_lineEdit_textChanged(const QString &arg1)
{
    savename=arg1;
}

void NewChar::on_buttonBox_accepted()
{
    QString filename=savename;
    QFile file( "/home/vox/"+filename+".save" );
    if ( file.open(QIODevice::ReadWrite) )
    {

    }
    //setResult(savename);
}
