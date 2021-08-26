#include "charsheet.h"
#include "ui_charsheet.h"
#include "newchar.h"
#include "racemenu.h"
#include "abilities.h"
#include "abilitiesmenu.h"
#include "skillsmenu.h"
#include <vector>
#include <QDebug>
#include <QString>
#include <QLabel>
#include <QPixmap>
#include <QFileDialog>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QTableWidgetItem>
#include <QListWidgetItem>

using namespace std;
//////////////// lista danych do save'a   ////////////////
QString name, religion, picture_path, description, filename, whatever;
int alignment, race, sizeofcreature, gender, huge, weight, age, S, Zr, Bd, Int, Rzt, Cha, Wytr, Ref, Wola, speed, staminamax, manamax, skillpoints, abilitypoints, atributepoints, abilities_size;
vector <int> languages;
vector <int> skills;
vector <int> abilities;
vector <int> min_height;
vector <int> min_weight;
vector <int> max_height;
vector <int> max_weight;
vector <int> max_age;
QFile file;
vector <QString> racechoice;

///////////////  koniec zmiennych     ////////////////

///////////////  definicja funkcji pomocniczych    /////////////////

void CharSheet::startup(){
    srand(time(NULL));
    ui->Size->setDisabled(1);
    ui->lineEdit_7->setDisabled(1);
    ui->lineEdit_8->setDisabled(1);
    fillracechoice();
    fillminweight();
    fillmaxweight();
    fillminheight();
    fillmaxheight();
    fillmaxage();
    fillracechoice();
}

void CharSheet::gendersetup(){
    if (gender==0) ui->lineEdit_8->setText(QString :: fromUtf8("męszczyzna"));
    else ui->lineEdit_8->setText("kobieta");
}


void CharSheet::refresh(){
    QListWidgetItem *ilis= new QListWidgetItem;
    QTableWidgetItem *itab= new QTableWidgetItem;
    ui->CharName->setText(name);
    ui->comboBox->setCurrentIndex(alignment);
    ui->Religion->setText(religion);
    ui->Wieght->setText(whatever.number(weight));
    ui->Height->setText(whatever.number(huge));
    ui->lineEdit->setText(whatever.number(age));
    ui->lineEdit_7->setText(racechoice.at(race));
    for(int i=0;i<45;i++){
       itab->setText(whatever.number(skills.at(i)));
       ui->tableWidget_4->setItem(i, 1, itab);
    }
    ui->textEdit->setText(description);
    ui->listWidget_2->clear();
    for(int i=0;i<abilities_size;i++){
       ilis->setText(whatever.number(abilities.at(i)));
       ui->listWidget_2->addItem(ilis);
    }
    itab->setText(whatever.number(S));
    ui->tableWidget->setItem(0, 0, itab);
    itab->setText(whatever.number(Zr));
    ui->tableWidget->setItem(1, 0, itab);
    itab->setText(whatever.number(Bd));
    ui->tableWidget->setItem(2, 0, itab);
    itab->setText(whatever.number(Int));
    ui->tableWidget->setItem(3, 0, itab);
    itab->setText(whatever.number(Rzt));
    ui->tableWidget->setItem(4, 0, itab);
    itab->setText(whatever.number(Cha));
    ui->tableWidget->setItem(5, 0, itab);
    itab->setText(whatever.number((S-11)/2));
    ui->tableWidget->setItem(0, 1, itab);
    itab->setText(whatever.number((Zr-11)/2));
    ui->tableWidget->setItem(1, 1, itab);
    itab->setText(whatever.number((Bd-11)/2));
    ui->tableWidget->setItem(2, 1, itab);
    itab->setText(whatever.number((Int-11)/2));
    ui->tableWidget->setItem(3, 1, itab);
    itab->setText(whatever.number((Rzt-11)/2));
    ui->tableWidget->setItem(4, 1, itab);
    itab->setText(whatever.number((Cha-11)/2));
    ui->tableWidget->setItem(5, 1, itab);
    itab->setText(whatever.number(Wytr));
    ui->tableWidget_2->setItem(0, 0, itab);
    itab->setText(whatever.number(Ref));
    ui->tableWidget_2->setItem(1, 0, itab);
    itab->setText(whatever.number(Wola));
    ui->tableWidget_2->setItem(2, 0, itab);
    gendersetup();
    ui->Size->setText(whatever.number(sizeofcreature));
}

void CharSheet::write_savename(const QString &text)
{
    filename=text;
}

void CharSheet::fillmaxage(){
    max_age.push_back(90);
    max_age.push_back(80);
    max_age.push_back(100);
    max_age.push_back(300);
    max_age.push_back(300);
    max_age.push_back(300);
    max_age.push_back(140);
    max_age.push_back(110);
    max_age.push_back(80);
    max_age.push_back(80);
    max_age.push_back(120);
    max_age.push_back(120);
    max_age.push_back(120);
    max_age.push_back(340);
    max_age.push_back(340);
    max_age.push_back(140);
    max_age.push_back(140);
    max_age.push_back(140);
    max_age.push_back(140);
    max_age.push_back(240);
    max_age.push_back(90);
    max_age.push_back(90);
    max_age.push_back(90);
    max_age.push_back(90);
    max_age.push_back(90);
    max_age.push_back(90);
    max_age.push_back(90);
    max_age.push_back(140);
    max_age.push_back(160);
    max_age.push_back(150);
    max_age.push_back(120);
    max_age.push_back(100);
}

void CharSheet::fillmaxweight(){
    max_weight.push_back(120);
    max_weight.push_back(120);
    max_weight.push_back(120);
    max_weight.push_back(80);
    max_weight.push_back(80);
    max_weight.push_back(80);
    max_weight.push_back(100);
    max_weight.push_back(80);
    max_weight.push_back(60);
    max_weight.push_back(140);
    max_weight.push_back(130);
    max_weight.push_back(100);
    max_weight.push_back(130);
    max_weight.push_back(120);
    max_weight.push_back(120);
    max_weight.push_back(120);
    max_weight.push_back(70);
    max_weight.push_back(120);
    max_weight.push_back(140);
    max_weight.push_back(130);
    max_weight.push_back(120);
    max_weight.push_back(120);
    max_weight.push_back(120);
    max_weight.push_back(120);
    max_weight.push_back(120);
    max_weight.push_back(120);
    max_weight.push_back(120);
    max_weight.push_back(60);
    max_weight.push_back(160);
    max_weight.push_back(100);
    max_weight.push_back(100);
    max_weight.push_back(80);
}

void CharSheet::fillminweight(){
    min_weight.push_back(40);
    min_weight.push_back(40);
    min_weight.push_back(40);
    min_weight.push_back(30);
    min_weight.push_back(30);
    min_weight.push_back(30);
    min_weight.push_back(60);
    min_weight.push_back(25);
    min_weight.push_back(20);
    min_weight.push_back(70);
    min_weight.push_back(80);
    min_weight.push_back(80);
    min_weight.push_back(80);
    min_weight.push_back(40);
    min_weight.push_back(40);
    min_weight.push_back(40);
    min_weight.push_back(20);
    min_weight.push_back(40);
    min_weight.push_back(60);
    min_weight.push_back(60);
    min_weight.push_back(40);
    min_weight.push_back(40);
    min_weight.push_back(40);
    min_weight.push_back(40);
    min_weight.push_back(40);
    min_weight.push_back(40);
    min_weight.push_back(40);
    min_weight.push_back(40);
    min_weight.push_back(35);
    min_weight.push_back(40);
    min_weight.push_back(50);
    min_weight.push_back(30);
}

void CharSheet::fillmaxheight(){
    max_height.push_back(200);
    max_height.push_back(220);
    max_height.push_back(180);
    max_height.push_back(190);
    max_height.push_back(190);
    max_height.push_back(190);
    max_height.push_back(150);
    max_height.push_back(130);
    max_height.push_back(120);
    max_height.push_back(220);
    max_height.push_back(190);
    max_height.push_back(180);
    max_height.push_back(210);
    max_height.push_back(200);
    max_height.push_back(200);
    max_height.push_back(200);
    max_height.push_back(200);
    max_height.push_back(200);
    max_height.push_back(200);
    max_height.push_back(200);
    max_height.push_back(200);
    max_height.push_back(200);
    max_height.push_back(200);
    max_height.push_back(200);
    max_height.push_back(200);
    max_height.push_back(200);
    max_height.push_back(200);
    max_height.push_back(180);
    max_height.push_back(240);
    max_height.push_back(180);
    max_height.push_back(180);
    max_height.push_back(170);
}

void CharSheet::fillminheight(){
    min_height.push_back(150);
    min_height.push_back(150);
    min_height.push_back(140);
    min_height.push_back(140);
    min_height.push_back(140);
    min_height.push_back(140);
    min_height.push_back(100);
    min_height.push_back(90);
    min_height.push_back(70);
    min_height.push_back(160);
    min_height.push_back(150);
    min_height.push_back(140);
    min_height.push_back(170);
    min_height.push_back(150);
    min_height.push_back(150);
    min_height.push_back(150);
    min_height.push_back(150);
    min_height.push_back(150);
    min_height.push_back(150);
    min_height.push_back(150);
    min_height.push_back(150);
    min_height.push_back(150);
    min_height.push_back(150);
    min_height.push_back(150);
    min_height.push_back(150);
    min_height.push_back(150);
    min_height.push_back(150);
    min_height.push_back(150);
    min_height.push_back(140);
    min_height.push_back(140);
    min_height.push_back(150);
    min_height.push_back(130);
}

void CharSheet::fillracechoice(){
    racechoice.push_back(QString :: fromUtf8("Człowiek biały"));
    racechoice.push_back(QString :: fromUtf8("Człowiek czarny"));
    racechoice.push_back(QString :: fromUtf8("Człowiek żółty"));
    racechoice.push_back(QString :: fromUtf8("Elf leśny"));
    racechoice.push_back(QString :: fromUtf8("Elf szary"));
    racechoice.push_back(QString :: fromUtf8("Elf mroczny"));
    racechoice.push_back(QString :: fromUtf8("Krasnolud"));
    racechoice.push_back(QString :: fromUtf8("Gnom"));
    racechoice.push_back(QString :: fromUtf8("Niziołek"));
    racechoice.push_back(QString :: fromUtf8("Ork"));
    racechoice.push_back(QString :: fromUtf8("Argonianin"));
    racechoice.push_back(QString :: fromUtf8("Sahuagin"));
    racechoice.push_back(QString :: fromUtf8("Troglodyta"));
    racechoice.push_back(QString :: fromUtf8("Aasimar"));
    racechoice.push_back(QString :: fromUtf8("Diablę"));
    racechoice.push_back(QString :: fromUtf8("Genasi ognia"));
    racechoice.push_back(QString :: fromUtf8("Genasi powietrza"));
    racechoice.push_back(QString :: fromUtf8("Genasi wody"));
    racechoice.push_back(QString :: fromUtf8("Genasi ziemi"));
    racechoice.push_back(QString :: fromUtf8("Półsmok"));
    racechoice.push_back(QString :: fromUtf8("Wilkołak"));
    racechoice.push_back(QString :: fromUtf8("Dzikołak"));
    racechoice.push_back(QString :: fromUtf8("Szczurołak"));
    racechoice.push_back(QString :: fromUtf8("Gnoll"));
    racechoice.push_back(QString :: fromUtf8("Tygrysołak"));
    racechoice.push_back(QString :: fromUtf8("Lisołak"));
    racechoice.push_back(QString :: fromUtf8("Niedźwiedziołak"));
    racechoice.push_back(QString :: fromUtf8("Nimfa"));
    racechoice.push_back(QString :: fromUtf8("Yuan-Ti"));
    racechoice.push_back(QString :: fromUtf8("Człowiek-duch"));
    racechoice.push_back(QString :: fromUtf8("Tengu"));
    racechoice.push_back(QString :: fromUtf8("Vanar"));
}

////////////   koniec definicji funkcji pomocniczych    ////////////

CharSheet::CharSheet(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CharSheet)
{
    ui->setupUi(this);
    startup();
}

CharSheet::~CharSheet()
{
    delete ui;
}

void CharSheet::on_CharName_textEdited(const QString &arg1)
{
    name=arg1;
}

void CharSheet::on_comboBox_activated(int index)
{
    alignment=index;
}

void CharSheet::on_actionSave_Character_triggered()
{
    if (file.isOpen()){file.close();}
    file.setFileName( filename );
    file.open(QFile::WriteOnly|QFile::Truncate);
    if ( file.isOpen() )
    {
        QTextStream stream( &file );
        stream <<name<< endl;
        stream <<religion<< endl;
        stream <<description<< endl;
        stream <<age<< endl;
        stream <<huge<< endl;
        stream <<weight<< endl;
        stream <<race<< endl;
        for(int i=0;i<45;i++){
            QTableWidgetItem *itab = ui->tableWidget_4->item(i,1);
            whatever = itab->text();
            stream <<whatever<<endl;
        }
        stream <<abilities_size<<endl;
        for(int i=0;i<abilities_size;i++){
            stream <<abilities.at(i)<<endl;
            stream <<S<<endl;
            stream <<Zr<<endl;
            stream <<Bd<<endl;
            stream <<Int<<endl;
            stream <<Rzt<<endl;
            stream <<Cha<<endl;
            stream <<Wytr<<endl;
            stream <<Ref<<endl;
            stream <<Wola<<endl;

        }
    }
}

void CharSheet::on_actionNew_Character_triggered()
{
    NewChar insertsavename;
 //   QObject::connect(&insertsavename, SIGNAL(on_lineEdit_textChanged(const QString &)), this, SLOT(write_savename(const QString &)));
    insertsavename.setModal(true);
    insertsavename.exec();
 //   filename="/home/vox/"+filename+".save";
 //   qDebug()<<filename;
    skills.clear();
    for(int i=0;i<45;i++){
       QTableWidgetItem *itab= new QTableWidgetItem;
       for(int j=0;j<45;j++){
           skills.push_back(0);
       }
       itab->setText(whatever.number(0));
       ui->tableWidget_4->setItem(i, 1, itab);
    }
    atributepoints=25;
    abilitypoints=3;
    skillpoints=4*8;
    S=8;
    Zr=8;
    Bd=8;
    Int=8;
    Rzt=8;
    Cha=8;
    Wytr=0;
    Ref=0;
    Cha=0;
}

void CharSheet::on_actionLoad_Character_triggered()
{
    fillracechoice();
    if(file.isOpen()){file.close();}
    filename=QFileDialog::getOpenFileName(this, tr("Open File"), "/home/vox", "All Files (*.*);;Saves (*.save)");
    file.setFileName( filename );
    file.open(QIODevice::ReadWrite);
    if ( file.isOpen() )
    {
        name=file.readLine();
        religion=file.readLine();
        description=file.readLine();
        whatever=file.readLine();
        age=whatever.split(" ")[0].toInt();
        whatever=file.readLine();
        huge=whatever.split(" ")[0].toInt();
        whatever=file.readLine();
        weight=whatever.split(" ")[0].toInt();
        whatever=file.readLine();
        race=whatever.split(" ")[0].toInt();
        skills.clear();
        for(int i=0;i<45;i++){
            whatever=file.readLine();
            skills.push_back(whatever.split(" ")[0].toInt());
        }
        whatever=file.readLine();
        abilities_size=whatever.split(" ")[0].toInt();
        for(int i=0;i<abilities_size;i++){
            whatever=file.readLine();
            abilities.push_back(whatever.split(" ")[0].toInt());
        }
        whatever=file.readLine();
        S=whatever.split(" ")[0].toInt();
        whatever=file.readLine();
        Zr=whatever.split(" ")[0].toInt();
        whatever=file.readLine();
        Bd=whatever.split(" ")[0].toInt();
        whatever=file.readLine();
        Int=whatever.split(" ")[0].toInt();
        whatever=file.readLine();
        Rzt=whatever.split(" ")[0].toInt();
        whatever=file.readLine();
        Cha=whatever.split(" ")[0].toInt();
        whatever=file.readLine();
        Wytr=whatever.split(" ")[0].toInt();
        whatever=file.readLine();
        Ref=whatever.split(" ")[0].toInt();
        whatever=file.readLine();
        Wola=whatever.split(" ")[0].toInt();
        refresh();
    }
}

void CharSheet::on_textEdit_textChanged()
{
   description = ui->textEdit->toPlainText();
}

void CharSheet::on_lineEdit_textEdited(const QString &arg1)
{
    age=arg1.split(" ")[0].toInt();
}

void CharSheet::on_Wieght_textEdited(const QString &arg1)
{
    weight=arg1.split(" ")[0].toInt();
}

void CharSheet::on_Height_textEdited(const QString &arg2)
{
    huge=arg2.split(" ")[0].toInt();
}

void CharSheet::on_Religion_textEdited(const QString &arg1)
{
    religion = arg1;
}

void CharSheet::on_pushButton_clicked()
{
    picture_path=QFileDialog::getOpenFileName(this, tr("Open File"), "/home/", "All Files (*.*);;Pictures (*.jpg);;Pictures (*.png)");
//    QMessageBox::information(this, tr("Open File"), picture_path);
    QPixmap picture(picture_path);
    int h = ui->pic->height();
    int w = ui->pic->width();
    ui->pic->setPixmap(picture.scaled(w,h,Qt::KeepAspectRatio));
    qDebug()<<picture_path;
}

void CharSheet::on_pushButton_2_clicked()
{
    QString randomthrow;
    randomthrow.setNum(rand()%20+1+(S-11)/2);
    ui->textEdit_4->setText(randomthrow);
    ui->textEdit_3->append(randomthrow);
}

void CharSheet::on_pushButton_3_clicked()
{
    QString randomthrow;
    randomthrow.setNum(rand()%20+1+(Zr-11)/2);
    ui->textEdit_4->setText(randomthrow);
    ui->textEdit_3->append(randomthrow);
}

void CharSheet::on_pushButton_4_clicked()
{
    QString randomthrow;
    randomthrow.setNum(rand()%20+1+(Bd-11)/2);
    ui->textEdit_4->setText(randomthrow);
    ui->textEdit_3->append(randomthrow);
}

void CharSheet::on_pushButton_5_clicked()
{
    QString randomthrow;
    randomthrow.setNum(rand()%20+1+(Int-11)/2);
    ui->textEdit_4->setText(randomthrow);
    ui->textEdit_3->append(randomthrow);
}

void CharSheet::on_pushButton_6_clicked()
{
    QString randomthrow;
    randomthrow.setNum(rand()%20+1+(Rzt-11)/2);
    ui->textEdit_4->setText(randomthrow);
    ui->textEdit_3->append(randomthrow);
}

void CharSheet::on_pushButton_7_clicked()
{
    QString randomthrow;
    randomthrow.setNum(rand()%20+1+(Cha-11)/2);
    ui->textEdit_4->setText(randomthrow);
    ui->textEdit_3->append(randomthrow);
}

void CharSheet::on_pushButton_8_clicked()
{
    QString randomthrow;
    randomthrow.setNum(rand()%20+1+Wytr);
    ui->textEdit_4->setText(randomthrow);
    ui->textEdit_3->append(randomthrow);
}

void CharSheet::on_pushButton_9_clicked()
{
    QString randomthrow;
    randomthrow.setNum(rand()%20+1+Ref);
    ui->textEdit_4->setText(randomthrow);
    ui->textEdit_3->append(randomthrow);
}

void CharSheet::on_pushButton_10_clicked()
{
    QString randomthrow;
    randomthrow.setNum(rand()%20+1+Wola);
    ui->textEdit_4->setText(randomthrow);
    ui->textEdit_3->append(randomthrow);
}

void CharSheet::on_pushButton_12_clicked()
{
    racemenu chooserace;
    chooserace.setModal(true);
    chooserace.exec();
    race=chooserace.result();
    if(race<0){
        gender=1;
        race=-race-1;
    }
    else {
        gender=0;
    }
    if(race==7 || race==8) {sizeofcreature=-1;}
    else {sizeofcreature=0;}
    ui->lineEdit_7->setText(racechoice.at(race));
    AbilitiesMenu atributes;
    atributes.setModal(true);
    atributes.exec();
    //atributes_menu
    // skills_menu
    // abilities_menu
    refresh();
}
