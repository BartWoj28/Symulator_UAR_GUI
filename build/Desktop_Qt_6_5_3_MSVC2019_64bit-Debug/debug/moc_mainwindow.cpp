/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCharts/qlineseries.h>
#include <QtCharts/qabstractbarseries.h>
#include <QtCharts/qvbarmodelmapper.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCharts/qcandlestickseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qxyseries.h>
#include <QtCharts/qxyseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qxyseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "advance",
    "",
    "on_ustawA_valueChanged",
    "arg1",
    "on_ustawP_valueChanged",
    "on_ustawT_valueChanged",
    "on_ustawKpid_valueChanged",
    "on_ustawTi_valueChanged",
    "on_ustawTd_valueChanged",
    "dodajSerie",
    "resetMaksMin",
    "usunSerie",
    "utworzSerie",
    "utworzOsie",
    "ustawNazwy",
    "ustawZakres",
    "dodacDoSerii",
    "ustawMin",
    "ustawMax",
    "usun_charty",
    "on_Spbox_inter_valueChanged",
    "Pobiezdane_ARX",
    "ZakresWykresu",
    "double&",
    "y",
    "QLineSeries*&",
    "seria",
    "on_checkBox_stateChanged",
    "on_Spbox_Stala_valueChanged",
    "on_StartStop_clicked",
    "on_Reset_clicked",
    "on_ustaw_S_valueChanged",
    "on_Sygnal_currentTextChanged",
    "on_chboxCalka_stateChanged",
    "on_pidReset_clicked",
    "on_edytujARX_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[74];
    char stringdata0[11];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[23];
    char stringdata4[5];
    char stringdata5[23];
    char stringdata6[23];
    char stringdata7[26];
    char stringdata8[24];
    char stringdata9[24];
    char stringdata10[11];
    char stringdata11[13];
    char stringdata12[10];
    char stringdata13[12];
    char stringdata14[11];
    char stringdata15[11];
    char stringdata16[12];
    char stringdata17[13];
    char stringdata18[9];
    char stringdata19[9];
    char stringdata20[12];
    char stringdata21[28];
    char stringdata22[15];
    char stringdata23[14];
    char stringdata24[8];
    char stringdata25[2];
    char stringdata26[14];
    char stringdata27[6];
    char stringdata28[25];
    char stringdata29[28];
    char stringdata30[21];
    char stringdata31[17];
    char stringdata32[24];
    char stringdata33[29];
    char stringdata34[27];
    char stringdata35[20];
    char stringdata36[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 7),  // "advance"
        QT_MOC_LITERAL(19, 0),  // ""
        QT_MOC_LITERAL(20, 22),  // "on_ustawA_valueChanged"
        QT_MOC_LITERAL(43, 4),  // "arg1"
        QT_MOC_LITERAL(48, 22),  // "on_ustawP_valueChanged"
        QT_MOC_LITERAL(71, 22),  // "on_ustawT_valueChanged"
        QT_MOC_LITERAL(94, 25),  // "on_ustawKpid_valueChanged"
        QT_MOC_LITERAL(120, 23),  // "on_ustawTi_valueChanged"
        QT_MOC_LITERAL(144, 23),  // "on_ustawTd_valueChanged"
        QT_MOC_LITERAL(168, 10),  // "dodajSerie"
        QT_MOC_LITERAL(179, 12),  // "resetMaksMin"
        QT_MOC_LITERAL(192, 9),  // "usunSerie"
        QT_MOC_LITERAL(202, 11),  // "utworzSerie"
        QT_MOC_LITERAL(214, 10),  // "utworzOsie"
        QT_MOC_LITERAL(225, 10),  // "ustawNazwy"
        QT_MOC_LITERAL(236, 11),  // "ustawZakres"
        QT_MOC_LITERAL(248, 12),  // "dodacDoSerii"
        QT_MOC_LITERAL(261, 8),  // "ustawMin"
        QT_MOC_LITERAL(270, 8),  // "ustawMax"
        QT_MOC_LITERAL(279, 11),  // "usun_charty"
        QT_MOC_LITERAL(291, 27),  // "on_Spbox_inter_valueChanged"
        QT_MOC_LITERAL(319, 14),  // "Pobiezdane_ARX"
        QT_MOC_LITERAL(334, 13),  // "ZakresWykresu"
        QT_MOC_LITERAL(348, 7),  // "double&"
        QT_MOC_LITERAL(356, 1),  // "y"
        QT_MOC_LITERAL(358, 13),  // "QLineSeries*&"
        QT_MOC_LITERAL(372, 5),  // "seria"
        QT_MOC_LITERAL(378, 24),  // "on_checkBox_stateChanged"
        QT_MOC_LITERAL(403, 27),  // "on_Spbox_Stala_valueChanged"
        QT_MOC_LITERAL(431, 20),  // "on_StartStop_clicked"
        QT_MOC_LITERAL(452, 16),  // "on_Reset_clicked"
        QT_MOC_LITERAL(469, 23),  // "on_ustaw_S_valueChanged"
        QT_MOC_LITERAL(493, 28),  // "on_Sygnal_currentTextChanged"
        QT_MOC_LITERAL(522, 26),  // "on_chboxCalka_stateChanged"
        QT_MOC_LITERAL(549, 19),  // "on_pidReset_clicked"
        QT_MOC_LITERAL(569, 20)   // "on_edytujARX_clicked"
    },
    "MainWindow",
    "advance",
    "",
    "on_ustawA_valueChanged",
    "arg1",
    "on_ustawP_valueChanged",
    "on_ustawT_valueChanged",
    "on_ustawKpid_valueChanged",
    "on_ustawTi_valueChanged",
    "on_ustawTd_valueChanged",
    "dodajSerie",
    "resetMaksMin",
    "usunSerie",
    "utworzSerie",
    "utworzOsie",
    "ustawNazwy",
    "ustawZakres",
    "dodacDoSerii",
    "ustawMin",
    "ustawMax",
    "usun_charty",
    "on_Spbox_inter_valueChanged",
    "Pobiezdane_ARX",
    "ZakresWykresu",
    "double&",
    "y",
    "QLineSeries*&",
    "seria",
    "on_checkBox_stateChanged",
    "on_Spbox_Stala_valueChanged",
    "on_StartStop_clicked",
    "on_Reset_clicked",
    "on_ustaw_S_valueChanged",
    "on_Sygnal_currentTextChanged",
    "on_chboxCalka_stateChanged",
    "on_pidReset_clicked",
    "on_edytujARX_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  200,    2, 0x08,    1 /* Private */,
       3,    1,  201,    2, 0x08,    2 /* Private */,
       5,    1,  204,    2, 0x08,    4 /* Private */,
       6,    1,  207,    2, 0x08,    6 /* Private */,
       7,    1,  210,    2, 0x08,    8 /* Private */,
       8,    1,  213,    2, 0x08,   10 /* Private */,
       9,    1,  216,    2, 0x08,   12 /* Private */,
      10,    0,  219,    2, 0x08,   14 /* Private */,
      11,    0,  220,    2, 0x08,   15 /* Private */,
      12,    0,  221,    2, 0x08,   16 /* Private */,
      13,    0,  222,    2, 0x08,   17 /* Private */,
      14,    0,  223,    2, 0x08,   18 /* Private */,
      15,    0,  224,    2, 0x08,   19 /* Private */,
      16,    0,  225,    2, 0x08,   20 /* Private */,
      17,    0,  226,    2, 0x08,   21 /* Private */,
      18,    0,  227,    2, 0x08,   22 /* Private */,
      19,    0,  228,    2, 0x08,   23 /* Private */,
      20,    0,  229,    2, 0x08,   24 /* Private */,
      21,    1,  230,    2, 0x08,   25 /* Private */,
      22,    0,  233,    2, 0x08,   27 /* Private */,
      23,    3,  234,    2, 0x08,   28 /* Private */,
      23,    2,  241,    2, 0x28,   32 /* Private | MethodCloned */,
      28,    1,  246,    2, 0x08,   35 /* Private */,
      29,    1,  249,    2, 0x08,   37 /* Private */,
      30,    0,  252,    2, 0x08,   39 /* Private */,
      31,    0,  253,    2, 0x08,   40 /* Private */,
      32,    1,  254,    2, 0x08,   41 /* Private */,
      33,    1,  257,    2, 0x08,   43 /* Private */,
      34,    1,  260,    2, 0x08,   45 /* Private */,
      35,    0,  263,    2, 0x08,   47 /* Private */,
      36,    0,  264,    2, 0x08,   48 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24, 0x80000000 | 26, QMetaType::Bool,   25,   27,    2,
    QMetaType::Void, 0x80000000 | 24, 0x80000000 | 26,   25,   27,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'advance'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ustawA_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_ustawP_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_ustawT_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_ustawKpid_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_ustawTi_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_ustawTd_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'dodajSerie'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resetMaksMin'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'usunSerie'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'utworzSerie'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'utworzOsie'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ustawNazwy'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ustawZakres'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'dodacDoSerii'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ustawMin'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ustawMax'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'usun_charty'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Spbox_inter_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'Pobiezdane_ARX'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ZakresWykresu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLineSeries * &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'ZakresWykresu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLineSeries * &, std::false_type>,
        // method 'on_checkBox_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_Spbox_Stala_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_StartStop_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Reset_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ustaw_S_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_Sygnal_currentTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_chboxCalka_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_pidReset_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_edytujARX_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->advance(); break;
        case 1: _t->on_ustawA_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 2: _t->on_ustawP_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 3: _t->on_ustawT_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->on_ustawKpid_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 5: _t->on_ustawTi_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 6: _t->on_ustawTd_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 7: _t->dodajSerie(); break;
        case 8: _t->resetMaksMin(); break;
        case 9: _t->usunSerie(); break;
        case 10: _t->utworzSerie(); break;
        case 11: _t->utworzOsie(); break;
        case 12: _t->ustawNazwy(); break;
        case 13: _t->ustawZakres(); break;
        case 14: _t->dodacDoSerii(); break;
        case 15: _t->ustawMin(); break;
        case 16: _t->ustawMax(); break;
        case 17: _t->usun_charty(); break;
        case 18: _t->on_Spbox_inter_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 19: _t->Pobiezdane_ARX(); break;
        case 20: _t->ZakresWykresu((*reinterpret_cast< std::add_pointer_t<double&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QLineSeries*&>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 21: _t->ZakresWykresu((*reinterpret_cast< std::add_pointer_t<double&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QLineSeries*&>>(_a[2]))); break;
        case 22: _t->on_checkBox_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 23: _t->on_Spbox_Stala_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 24: _t->on_StartStop_clicked(); break;
        case 25: _t->on_Reset_clicked(); break;
        case 26: _t->on_ustaw_S_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 27: _t->on_Sygnal_currentTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 28: _t->on_chboxCalka_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 29: _t->on_pidReset_clicked(); break;
        case 30: _t->on_edytujARX_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 31)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 31;
    }
    return _id;
}
QT_WARNING_POP
