/****************************************************************************
** Meta object code from reading C++ file 'store.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../final2/GreenHouse/include/store.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'store.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Forooshgah_t {
    QByteArrayData data[10];
    char stringdata0[253];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Forooshgah_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Forooshgah_t qt_meta_stringdata_Forooshgah = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Forooshgah"
QT_MOC_LITERAL(1, 11, 28), // "on_pushButtonBuyKhak_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 26), // "on_pushButtonBuyAb_clicked"
QT_MOC_LITERAL(4, 68, 30), // "on_pushButtonBuyPoison_clicked"
QT_MOC_LITERAL(5, 99, 28), // "on_pushButtonBuyAadi_clicked"
QT_MOC_LITERAL(6, 128, 30), // "on_pushButtonBuyZinati_clicked"
QT_MOC_LITERAL(7, 159, 29), // "on_pushButtonBuyNader_clicked"
QT_MOC_LITERAL(8, 189, 31), // "on_pushButtonOrkideWH_8_clicked"
QT_MOC_LITERAL(9, 221, 31) // "on_pushButtonNargesWH_2_clicked"

    },
    "Forooshgah\0on_pushButtonBuyKhak_clicked\0"
    "\0on_pushButtonBuyAb_clicked\0"
    "on_pushButtonBuyPoison_clicked\0"
    "on_pushButtonBuyAadi_clicked\0"
    "on_pushButtonBuyZinati_clicked\0"
    "on_pushButtonBuyNader_clicked\0"
    "on_pushButtonOrkideWH_8_clicked\0"
    "on_pushButtonNargesWH_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Forooshgah[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Forooshgah::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Forooshgah *_t = static_cast<Forooshgah *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButtonBuyKhak_clicked(); break;
        case 1: _t->on_pushButtonBuyAb_clicked(); break;
        case 2: _t->on_pushButtonBuyPoison_clicked(); break;
        case 3: _t->on_pushButtonBuyAadi_clicked(); break;
        case 4: _t->on_pushButtonBuyZinati_clicked(); break;
        case 5: _t->on_pushButtonBuyNader_clicked(); break;
        case 6: _t->on_pushButtonOrkideWH_8_clicked(); break;
        case 7: _t->on_pushButtonNargesWH_2_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Forooshgah::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Forooshgah.data,
      qt_meta_data_Forooshgah,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Forooshgah::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Forooshgah::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Forooshgah.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Forooshgah::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
