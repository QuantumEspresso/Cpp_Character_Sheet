/********************************************************************************
** Form generated from reading UI file 'racemenu.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RACEMENU_H
#define UI_RACEMENU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_racemenu
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QTextEdit *textEdit;
    QComboBox *comboBox;
    QLabel *pic2;
    QComboBox *comboBox_2;
    QLabel *label_2;

    void setupUi(QDialog *racemenu)
    {
        if (racemenu->objectName().isEmpty())
            racemenu->setObjectName(QString::fromUtf8("racemenu"));
        racemenu->resize(934, 688);
        buttonBox = new QDialogButtonBox(racemenu);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(-150, 650, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(racemenu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 141, 17));
        textEdit = new QTextEdit(racemenu);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 71, 261, 401));
        comboBox = new QComboBox(racemenu);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 30, 261, 27));
        pic2 = new QLabel(racemenu);
        pic2->setObjectName(QString::fromUtf8("pic2"));
        pic2->setGeometry(QRect(290, 10, 631, 661));
        comboBox_2 = new QComboBox(racemenu);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(10, 510, 151, 27));
        label_2 = new QLabel(racemenu);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 490, 81, 17));

        retranslateUi(racemenu);
        QObject::connect(buttonBox, SIGNAL(accepted()), racemenu, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), racemenu, SLOT(reject()));

        QMetaObject::connectSlotsByName(racemenu);
    } // setupUi

    void retranslateUi(QDialog *racemenu)
    {
        racemenu->setWindowTitle(QApplication::translate("racemenu", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("racemenu", "Wybierz ras\304\231 postaci", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("racemenu", "Cz\305\202owiek bia\305\202y", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("racemenu", "Cz\305\202owiek czarny", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("racemenu", "Cz\305\202owiek \305\274\303\263\305\202ty", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("racemenu", "Elf le\305\233ny", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("racemenu", "Elf szary", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("racemenu", "Elf mroczny", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("racemenu", "Krasnolud", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("racemenu", "Gnom", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("racemenu", "Nizio\305\202ek", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("racemenu", "Ork", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("racemenu", "Jaszczurolud\305\272: Argonianin", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("racemenu", "Jaszczurolud\305\272: Sahuagin", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("racemenu", "Jaszczurolud\305\272: Troglodyta", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("racemenu", "Sferotki\304\231ty: Aasimar", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("racemenu", "Sferotkni\304\231ty: Diabl\304\231", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("racemenu", "Sferotkni\304\231ty: Genasi ognia", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("racemenu", "Sferotkni\304\231ty: Genasi powietrza", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("racemenu", "Sferotkni\304\231ty: Genasi wody", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("racemenu", "Sferotkni\304\231ty: Genasi ziemi", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("racemenu", "Sferotkni\304\231ty: P\303\263\305\202smok", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("racemenu", "Likantrop: Wilko\305\202ak", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("racemenu", "Likantrop: Dziko\305\202ak", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("racemenu", "Likantrop: Szczuro\305\202ak", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("racemenu", "Likantrop: Gnoll", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("racemenu", "Likantrop: Tygryso\305\202ak", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("racemenu", "Likantrop: Liso\305\202ak", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("racemenu", "Likantrop: Nied\305\272wiedzio\305\202ak", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("racemenu", "Nimfa", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("racemenu", "Yuan-Ti", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("racemenu", "Cz\305\202owiek-Duch", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("racemenu", "Tengu", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("racemenu", "Vanar", 0, QApplication::UnicodeUTF8)
        );
        pic2->setText(QString());
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("racemenu", "m\304\231szczyzna", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("racemenu", "kobieta", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("racemenu", "P\305\202e\304\207", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class racemenu: public Ui_racemenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RACEMENU_H
