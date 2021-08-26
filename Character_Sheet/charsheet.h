#ifndef CHARSHEET_H
#define CHARSHEET_H

#include <QMainWindow>

namespace Ui {
class CharSheet;
}

class CharSheet : public QMainWindow
{
    Q_OBJECT

public:
    explicit CharSheet(QWidget *parent = 0);
    ~CharSheet();

private slots:
    void on_CharName_textEdited(const QString &arg1);

    void on_comboBox_activated(int index);

    void on_actionSave_Character_triggered();

    void on_actionNew_Character_triggered();

    void on_actionLoad_Character_triggered();

    void on_textEdit_textChanged();

    void on_lineEdit_textEdited(const QString &arg1);

    void on_Wieght_textEdited(const QString &arg1);

    void on_Height_textEdited(const QString &arg1);

    void on_Religion_textEdited(const QString &arg1);

    void on_pushButton_clicked();

    void refresh();

    void gendersetup();

    void startup();

    void fillracechoice();

    void fillmaxage();

    void fillminweight();

    void fillmaxweight();

    void fillminheight();

    void fillmaxheight();

    void write_savename(const QString &);

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_12_clicked();

private:
    Ui::CharSheet *ui;
};


#endif // CHARSHEET_H
