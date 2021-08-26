/********************************************************************************
** Form generated from reading UI file 'abilities.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABILITIES_H
#define UI_ABILITIES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Abilities
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *Abilities)
    {
        if (Abilities->objectName().isEmpty())
            Abilities->setObjectName(QString::fromUtf8("Abilities"));
        Abilities->resize(675, 520);
        buttonBox = new QDialogButtonBox(Abilities);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(330, 480, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(Abilities);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 181, 17));
        lineEdit = new QLineEdit(Abilities);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(190, 10, 41, 27));

        retranslateUi(Abilities);
        QObject::connect(buttonBox, SIGNAL(accepted()), Abilities, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Abilities, SLOT(reject()));

        QMetaObject::connectSlotsByName(Abilities);
    } // setupUi

    void retranslateUi(QDialog *Abilities)
    {
        Abilities->setWindowTitle(QApplication::translate("Abilities", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Abilities", "<html><head/><body><p>Ilo\305\233\304\207 atut\303\263w do wybrania</p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Abilities: public Ui_Abilities {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABILITIES_H
