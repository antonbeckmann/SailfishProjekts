/****************************************************************************
** Meta object code from reading C++ file 'process.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hello_world/src/process.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'process.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Process_t {
    QByteArrayData data[8];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Process_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Process_t qt_meta_stringdata_Process = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Process"
QT_MOC_LITERAL(1, 8, 5), // "start"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 7), // "program"
QT_MOC_LITERAL(4, 23, 9), // "arguments"
QT_MOC_LITERAL(5, 33, 8), // "makedirs"
QT_MOC_LITERAL(6, 42, 16), // "getCommandString"
QT_MOC_LITERAL(7, 59, 7) // "readAll"

    },
    "Process\0start\0\0program\0arguments\0"
    "makedirs\0getCommandString\0readAll"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Process[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x02 /* Public */,
       5,    0,   39,    2, 0x02 /* Public */,
       6,    0,   40,    2, 0x02 /* Public */,
       7,    0,   41,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantList,    3,    4,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::QByteArray,

       0        // eod
};

void Process::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Process *_t = static_cast<Process *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->start((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantList(*)>(_a[2]))); break;
        case 1: _t->makedirs(); break;
        case 2: { QString _r = _t->getCommandString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: { QByteArray _r = _t->readAll();
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject Process::staticMetaObject = {
    { &QProcess::staticMetaObject, qt_meta_stringdata_Process.data,
      qt_meta_data_Process,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Process::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Process::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Process.stringdata0))
        return static_cast<void*>(const_cast< Process*>(this));
    return QProcess::qt_metacast(_clname);
}

int Process::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProcess::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE