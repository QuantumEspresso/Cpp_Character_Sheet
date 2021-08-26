/********************************************************************************
** Form generated from reading UI file 'skillsmenu.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKILLSMENU_H
#define UI_SKILLSMENU_H

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

class Ui_SkillsMenu
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEdit;
    QLabel *label;

    void setupUi(QDialog *SkillsMenu)
    {
        if (SkillsMenu->objectName().isEmpty())
            SkillsMenu->setObjectName(QString::fromUtf8("SkillsMenu"));
        SkillsMenu->resize(669, 514);
        buttonBox = new QDialogButtonBox(SkillsMenu);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(320, 470, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lineEdit = new QLineEdit(SkillsMenu);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(170, 0, 41, 31));
        label = new QLabel(SkillsMenu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 0, 141, 17));

        retranslateUi(SkillsMenu);
        QObject::connect(buttonBox, SIGNAL(accepted()), SkillsMenu, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SkillsMenu, SLOT(reject()));

        QMetaObject::connectSlotsByName(SkillsMenu);
    } // setupUi

    void retranslateUi(QDialog *SkillsMenu)
    {
        SkillsMenu->setWindowTitle(QApplication::translate("SkillsMenu", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SkillsMenu", "Punkty do rozdania", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SkillsMenu: public Ui_SkillsMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKILLSMENU_H
