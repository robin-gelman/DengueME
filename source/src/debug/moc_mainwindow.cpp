/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   11,   11,   11, 0x08,
      59,   11,   11,   11, 0x08,
      84,   75,   11,   11, 0x08,
     110,  104,   11,   11, 0x08,
     145,  139,   11,   11, 0x08,
     187,  173,   11,   11, 0x08,
     220,   11,   11,   11, 0x08,
     243,  235,   11,   11, 0x0a,
     267,   11,   11,   11, 0x2a,
     284,   11,   11,   11, 0x0a,
     303,   11,   11,   11, 0x0a,
     316,   11,   11,   11, 0x0a,
     330,   11,   11,   11, 0x0a,
     345,   11,   11,   11, 0x0a,
     360,   11,   11,   11, 0x0a,
     372,   11,   11,   11, 0x0a,
     390,   11,   11,   11, 0x0a,
     406,   11,   11,   11, 0x0a,
     420,   11,   11,   11, 0x0a,
     441,   11,   11,   11, 0x0a,
     462,   11,   11,   11, 0x0a,
     490,  481,   11,   11, 0x0a,
     542,  510,   11,   11, 0x0a,
     594,  589,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0action\0clickedByUser(QString)\0"
    "onModelStarted()\0onModelClosed()\0"
    "exitCode\0onModelStopped(int)\0point\0"
    "workspaceContextMenu(QPoint)\0index\0"
    "modelActivated(QModelIndex)\0title,content\0"
    "onHelpRequested(QString,QString)\0"
    "runUnitTests()\0project\0actionNewModel(QString)\0"
    "actionNewModel()\0actionNewProject()\0"
    "actionSave()\0actionClose()\0actionRemove()\0"
    "actionRename()\0actionRun()\0actionRunByStep()\0"
    "actionOptions()\0actionAbout()\0"
    "actionSetWorkspace()\0actionModelBuilder()\0"
    "actionResetViews()\0lvl,text\0"
    "output(int,QString)\0category,type,project,name,demo\0"
    "newModel(QString,QString,QString,QString,bool)\0"
    "name\0newProject(QString)\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->clickedByUser((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->onModelStarted(); break;
        case 2: _t->onModelClosed(); break;
        case 3: _t->onModelStopped((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->workspaceContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 5: _t->modelActivated((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 6: _t->onHelpRequested((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->runUnitTests(); break;
        case 8: _t->actionNewModel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->actionNewModel(); break;
        case 10: _t->actionNewProject(); break;
        case 11: _t->actionSave(); break;
        case 12: _t->actionClose(); break;
        case 13: _t->actionRemove(); break;
        case 14: _t->actionRename(); break;
        case 15: _t->actionRun(); break;
        case 16: _t->actionRunByStep(); break;
        case 17: _t->actionOptions(); break;
        case 18: _t->actionAbout(); break;
        case 19: _t->actionSetWorkspace(); break;
        case 20: _t->actionModelBuilder(); break;
        case 21: _t->actionResetViews(); break;
        case 22: _t->output((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 23: _t->newModel((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 24: _t->newProject((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::clickedByUser(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE