/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qt_opencv_tool/include/mainwindow.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[23];
    char stringdata0[360];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 22), // "setHoughParametersSlot"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 14), // "newEnabledBool"
QT_MOC_LITERAL(4, 50, 8), // "newDpDbl"
QT_MOC_LITERAL(5, 59, 13), // "newMinDistDbl"
QT_MOC_LITERAL(6, 73, 12), // "newParam1Dbl"
QT_MOC_LITERAL(7, 86, 12), // "newParam2Dbl"
QT_MOC_LITERAL(8, 99, 13), // "newMinRadiusI"
QT_MOC_LITERAL(9, 113, 13), // "newMaxRadiusI"
QT_MOC_LITERAL(10, 127, 15), // "newPixelSizeDbl"
QT_MOC_LITERAL(11, 143, 18), // "newEnabledBlurBool"
QT_MOC_LITERAL(12, 162, 13), // "newBlurKSizeI"
QT_MOC_LITERAL(13, 176, 13), // "newBlurSigmaI"
QT_MOC_LITERAL(14, 190, 20), // "startAcquisitionSlot"
QT_MOC_LITERAL(15, 211, 19), // "stopAcquisitionSlot"
QT_MOC_LITERAL(16, 231, 23), // "showHoughParametersSlot"
QT_MOC_LITERAL(17, 255, 9), // "timerSlot"
QT_MOC_LITERAL(18, 265, 13), // "changeCamSlot"
QT_MOC_LITERAL(19, 279, 20), // "changeResolutionSlot"
QT_MOC_LITERAL(20, 300, 5), // "index"
QT_MOC_LITERAL(21, 306, 25), // "recordButtonn_pressedSlot"
QT_MOC_LITERAL(22, 332, 27) // "saveVideoButton_pressedSlot"

    },
    "MainWindow\0setHoughParametersSlot\0\0"
    "newEnabledBool\0newDpDbl\0newMinDistDbl\0"
    "newParam1Dbl\0newParam2Dbl\0newMinRadiusI\0"
    "newMaxRadiusI\0newPixelSizeDbl\0"
    "newEnabledBlurBool\0newBlurKSizeI\0"
    "newBlurSigmaI\0startAcquisitionSlot\0"
    "stopAcquisitionSlot\0showHoughParametersSlot\0"
    "timerSlot\0changeCamSlot\0changeResolutionSlot\0"
    "index\0recordButtonn_pressedSlot\0"
    "saveVideoButton_pressedSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,   11,   59,    2, 0x08 /* Private */,
      14,    0,   82,    2, 0x08 /* Private */,
      15,    0,   83,    2, 0x08 /* Private */,
      16,    0,   84,    2, 0x08 /* Private */,
      17,    0,   85,    2, 0x08 /* Private */,
      18,    0,   86,    2, 0x08 /* Private */,
      19,    1,   87,    2, 0x08 /* Private */,
      21,    0,   90,    2, 0x08 /* Private */,
      22,    0,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Int, QMetaType::Double, QMetaType::Bool, QMetaType::Int, QMetaType::Int,    3,    4,    5,    6,    7,    8,    9,   10,   11,   12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setHoughParametersSlot((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9])),(*reinterpret_cast< int(*)>(_a[10])),(*reinterpret_cast< int(*)>(_a[11]))); break;
        case 1: _t->startAcquisitionSlot(); break;
        case 2: _t->stopAcquisitionSlot(); break;
        case 3: _t->showHoughParametersSlot(); break;
        case 4: _t->timerSlot(); break;
        case 5: _t->changeCamSlot(); break;
        case 6: _t->changeResolutionSlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->recordButtonn_pressedSlot(); break;
        case 8: _t->saveVideoButton_pressedSlot(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
