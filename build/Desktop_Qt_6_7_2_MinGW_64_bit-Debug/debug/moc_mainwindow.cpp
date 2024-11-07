/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QtCore/QSet>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.2. It"
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
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "on_gridlines_clicked",
    "",
    "colorPoint",
    "curPt",
    "color",
    "penwidth",
    "point_transform",
    "pt",
    "draw_gridlines",
    "unitDistance",
    "clear_screen",
    "recolor_screen",
    "redraw_screen",
    "on_zoomIn_clicked",
    "on_zoomOut_clicked",
    "on_setUnitDistance_clicked",
    "boyObj",
    "on_genClr_clicked",
    "generate_bresenham_linePts",
    "QList<QPoint>",
    "startPt",
    "endPt",
    "get_Vertices",
    "draw_Polgon_Sides",
    "QList<QPoint>&",
    "polygonVertices",
    "draw_Polygon",
    "color_pts",
    "linePts",
    "QSet<QPoint>&",
    "on_DrawPolygon_clicked",
    "get_Color",
    "four_neighbour",
    "flood_fill_rec",
    "seed",
    "fillColor",
    "visited",
    "on_FloodFill_clicked",
    "on_GenBg_clicked",
    "initializebg1",
    "isOutSide"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  176,    2, 0x08,    1 /* Private */,
       3,    3,  177,    2, 0x08,    2 /* Private */,
       3,    2,  184,    2, 0x28,    6 /* Private | MethodCloned */,
       7,    1,  189,    2, 0x08,    9 /* Private */,
       9,    1,  192,    2, 0x08,   11 /* Private */,
      11,    0,  195,    2, 0x08,   13 /* Private */,
      12,    0,  196,    2, 0x08,   14 /* Private */,
      13,    0,  197,    2, 0x08,   15 /* Private */,
      14,    0,  198,    2, 0x08,   16 /* Private */,
      15,    0,  199,    2, 0x08,   17 /* Private */,
      16,    0,  200,    2, 0x08,   18 /* Private */,
      17,    0,  201,    2, 0x08,   19 /* Private */,
      18,    0,  202,    2, 0x08,   20 /* Private */,
      19,    2,  203,    2, 0x08,   21 /* Private */,
      23,    0,  208,    2, 0x08,   24 /* Private */,
      24,    1,  209,    2, 0x08,   25 /* Private */,
      27,    0,  212,    2, 0x08,   27 /* Private */,
      28,    2,  213,    2, 0x08,   28 /* Private */,
      28,    2,  218,    2, 0x08,   31 /* Private */,
      31,    0,  223,    2, 0x08,   34 /* Private */,
      32,    1,  224,    2, 0x08,   35 /* Private */,
      33,    1,  227,    2, 0x08,   37 /* Private */,
      34,    3,  230,    2, 0x08,   39 /* Private */,
      38,    0,  237,    2, 0x08,   43 /* Private */,
      39,    0,  238,    2, 0x08,   44 /* Private */,
      40,    0,  239,    2, 0x08,   45 /* Private */,
      41,    1,  240,    2, 0x08,   46 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint, QMetaType::QColor, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, QMetaType::QPoint, QMetaType::QColor,    4,    5,
    QMetaType::QPoint, QMetaType::QPoint,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 20, QMetaType::QPoint, QMetaType::QPoint,   21,   22,
    0x80000000 | 20,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 25, QMetaType::QColor,   29,    5,
    QMetaType::Void, 0x80000000 | 30, QMetaType::QColor,   29,    5,
    QMetaType::Void,
    QMetaType::QColor, QMetaType::QPoint,    4,
    0x80000000 | 20, QMetaType::QPoint,    8,
    QMetaType::Void, QMetaType::QPoint, QMetaType::QColor, 0x80000000 | 30,   35,   36,   37,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QPoint,    8,

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
        // method 'on_gridlines_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'colorPoint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPoint, std::false_type>,
        QtPrivate::TypeAndForceComplete<QColor, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'colorPoint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPoint, std::false_type>,
        QtPrivate::TypeAndForceComplete<QColor, std::false_type>,
        // method 'point_transform'
        QtPrivate::TypeAndForceComplete<QPoint, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPoint, std::false_type>,
        // method 'draw_gridlines'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'clear_screen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'recolor_screen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'redraw_screen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_zoomIn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_zoomOut_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_setUnitDistance_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'boyObj'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_genClr_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'generate_bresenham_linePts'
        QtPrivate::TypeAndForceComplete<QVector<QPoint>, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPoint, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPoint, std::false_type>,
        // method 'get_Vertices'
        QtPrivate::TypeAndForceComplete<QVector<QPoint>, std::false_type>,
        // method 'draw_Polgon_Sides'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<QPoint> &, std::false_type>,
        // method 'draw_Polygon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'color_pts'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<QPoint> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QColor, std::false_type>,
        // method 'color_pts'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSet<QPoint> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QColor, std::false_type>,
        // method 'on_DrawPolygon_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'get_Color'
        QtPrivate::TypeAndForceComplete<QColor, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPoint, std::false_type>,
        // method 'four_neighbour'
        QtPrivate::TypeAndForceComplete<QVector<QPoint>, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPoint, std::false_type>,
        // method 'flood_fill_rec'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPoint, std::false_type>,
        QtPrivate::TypeAndForceComplete<QColor, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSet<QPoint> &, std::false_type>,
        // method 'on_FloodFill_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_GenBg_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'initializebg1'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isOutSide'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPoint, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_gridlines_clicked(); break;
        case 1: _t->colorPoint((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QColor>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 2: _t->colorPoint((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QColor>>(_a[2]))); break;
        case 3: { QPoint _r = _t->point_transform((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPoint*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->draw_gridlines((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->clear_screen(); break;
        case 6: _t->recolor_screen(); break;
        case 7: _t->redraw_screen(); break;
        case 8: _t->on_zoomIn_clicked(); break;
        case 9: _t->on_zoomOut_clicked(); break;
        case 10: _t->on_setUnitDistance_clicked(); break;
        case 11: _t->boyObj(); break;
        case 12: _t->on_genClr_clicked(); break;
        case 13: { QList<QPoint> _r = _t->generate_bresenham_linePts((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QPoint>*>(_a[0]) = std::move(_r); }  break;
        case 14: { QList<QPoint> _r = _t->get_Vertices();
            if (_a[0]) *reinterpret_cast< QList<QPoint>*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->draw_Polgon_Sides((*reinterpret_cast< std::add_pointer_t<QList<QPoint>&>>(_a[1]))); break;
        case 16: _t->draw_Polygon(); break;
        case 17: _t->color_pts((*reinterpret_cast< std::add_pointer_t<QList<QPoint>&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QColor>>(_a[2]))); break;
        case 18: _t->color_pts((*reinterpret_cast< std::add_pointer_t<QSet<QPoint>&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QColor>>(_a[2]))); break;
        case 19: _t->on_DrawPolygon_clicked(); break;
        case 20: { QColor _r = _t->get_Color((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = std::move(_r); }  break;
        case 21: { QList<QPoint> _r = _t->four_neighbour((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QPoint>*>(_a[0]) = std::move(_r); }  break;
        case 22: _t->flood_fill_rec((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QColor>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QSet<QPoint>&>>(_a[3]))); break;
        case 23: _t->on_FloodFill_clicked(); break;
        case 24: _t->on_GenBg_clicked(); break;
        case 25: _t->initializebg1(); break;
        case 26: { bool _r = _t->isOutSide((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
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
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 27;
    }
    return _id;
}
QT_WARNING_POP
