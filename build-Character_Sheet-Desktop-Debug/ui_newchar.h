/********************************************************************************
** Form generated from reading UI file 'newchar.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWCHAR_H
#define UI_NEWCHAR_H

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

class Ui_NewChar
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *NewChar)
    {
        if (NewChar->objectName().isEmpty())
            NewChar->setObjectName(QString::fromUtf8("NewChar"));
        NewChar->resize(355, 100);
        buttonBox = new QDialogButtonBox(NewChar);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 60, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(NewChar);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 211, 21));
        lineEdit = new QLineEdit(NewChar);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 30, 231, 27));

        retranslateUi(NewChar);
        QObject::connect(buttonBox, SIGNAL(accepted()), NewChar, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NewChar, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewChar);
    } // setupUi

    void retranslateUi(QDialog *NewChar)
    {
        NewChar->setWindowTitle(QApplication::translate("NewChar", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("NewChar", "Insert name of character save", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NewChar: public Ui_NewChar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWCHAR_H
