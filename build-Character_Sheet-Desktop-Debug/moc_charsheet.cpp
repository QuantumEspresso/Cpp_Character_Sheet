/****************************************************************************
** Meta object code from reading C++ file 'charsheet.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Character_Sheet/charsheet.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'charsheet.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CharSheet[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   11,   10,   10, 0x08,
      54,   48,   10,   10, 0x08,
      81,   10,   10,   10, 0x08,
     117,   10,   10,   10, 0x08,
     152,   10,   10,   10, 0x08,
     188,   10,   10,   10, 0x08,
     214,   11,   10,   10, 0x08,
     246,   11,   10,   10, 0x08,
     276,   11,   10,   10, 0x08,
     306,   11,   10,   10, 0x08,
     338,   10,   10,   10, 0x08,
     362,   10,   10,   10, 0x08,
     372,   10,   10,   10, 0x08,
     386,   10,   10,   10, 0x08,
     396,   10,   10,   10, 0x08,
     413,   10,   10,   10, 0x08,
     426,   10,   10,   10, 0x08,
     442,   10,   10,   10, 0x08,
     458,   10,   10,   10, 0x08,
     474,   10,   10,   10, 0x08,
     490,   10,   10,   10, 0x08,
     514,   10,   10,   10, 0x08,
     540,   10,   10,   10, 0x08,
     566,   10,   10,   10, 0x08,
     592,   10,   10,   10, 0x08,
     618,   10,   10,   10, 0x08,
     644,   10,   10,   10, 0x08,
     670,   10,   10,   10, 0x08,
     696,   10,   10,   10, 0x08,
     722,   10,   10,   10, 0x08,
     749,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CharSheet[] = {
    "CharSheet\0\0arg1\0on_CharName_textEdited(QString)\0"
    "index\0on_comboBox_activated(int)\0"
    "on_actionSave_Character_triggered()\0"
    "on_actionNew_Character_triggered()\0"
    "on_actionLoad_Character_triggered()\0"
    "on_textEdit_textChanged()\0"
    "on_lineEdit_textEdited(QString)\0"
    "on_Wieght_textEdited(QString)\0"
    "on_Height_textEdited(QString)\0"
    "on_Religion_textEdited(QString)\0"
    "on_pushButton_clicked()\0refresh()\0"
    "gendersetup()\0startup()\0fillracechoice()\0"
    "fillmaxage()\0fillminweight()\0"
    "fillmaxweight()\0fillminheight()\0"
    "fillmaxheight()\0write_savename(QString)\0"
    "on_pushButton_2_clicked()\0"
    "on_pushButton_3_clicked()\0"
    "on_pushButton_4_clicked()\0"
    "on_pushButton_5_clicked()\0"
    "on_pushButton_6_clicked()\0"
    "on_pushButton_7_clicked()\0"
    "on_pushButton_8_clicked()\0"
    "on_pushButton_9_clicked()\0"
    "on_pushButton_10_clicked()\0"
    "on_pushButton_12_clicked()\0"
};

void CharSheet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CharSheet *_t = static_cast<CharSheet *>(_o);
        switch (_id) {
        case 0: _t->on_CharName_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_comboBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_actionSave_Character_triggered(); break;
        case 3: _t->on_actionNew_Character_triggered(); break;
        case 4: _t->on_actionLoad_Character_triggered(); break;
        case 5: _t->on_textEdit_textChanged(); break;
        case 6: _t->on_lineEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_Wieght_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_Height_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_Religion_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->on_pushButton_clicked(); break;
        case 11: _t->refresh(); break;
        case 12: _t->gendersetup(); break;
        case 13: _t->startup(); break;
        case 14: _t->fillracechoice(); break;
        case 15: _t->fillmaxage(); break;
        case 16: _t->fillminweight(); break;
        case 17: _t->fillmaxweight(); break;
        case 18: _t->fillminheight(); break;
        case 19: _t->fillmaxheight(); break;
        case 20: _t->write_savename((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->on_pushButton_2_clicked(); break;
        case 22: _t->on_pushButton_3_clicked(); break;
        case 23: _t->on_pushButton_4_clicked(); break;
        case 24: _t->on_pushButton_5_clicked(); break;
        case 25: _t->on_pushButton_6_clicked(); break;
        case 26: _t->on_pushButton_7_clicked(); break;
        case 27: _t->on_pushButton_8_clicked(); break;
        case 28: _t->on_pushButton_9_clicked(); break;
        case 29: _t->on_pushButton_10_clicked(); break;
        case 30: _t->on_pushButton_12_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CharSheet::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CharSheet::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_CharSheet,
      qt_meta_data_CharSheet, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CharSheet::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CharSheet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CharSheet::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CharSheet))
        return static_cast<void*>(const_cast< CharSheet*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int CharSheet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
