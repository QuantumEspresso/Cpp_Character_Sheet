/********************************************************************************
** Form generated from reading UI file 'abilitiesmenu.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABILITIESMENU_H
#define UI_ABILITIESMENU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_AbilitiesMenu
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AbilitiesMenu)
    {
        if (AbilitiesMenu->objectName().isEmpty())
            AbilitiesMenu->setObjectName(QString::fromUtf8("AbilitiesMenu"));
        AbilitiesMenu->resize(665, 521);
        buttonBox = new QDialogButtonBox(AbilitiesMenu);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(320, 480, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(AbilitiesMenu);
        QObject::connect(buttonBox, SIGNAL(accepted()), AbilitiesMenu, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AbilitiesMenu, SLOT(reject()));

        QMetaObject::connectSlotsByName(AbilitiesMenu);
    } // setupUi

    void retranslateUi(QDialog *AbilitiesMenu)
    {
        AbilitiesMenu->setWindowTitle(QApplication::translate("AbilitiesMenu", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AbilitiesMenu: public Ui_AbilitiesMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABILITIESMENU_H
