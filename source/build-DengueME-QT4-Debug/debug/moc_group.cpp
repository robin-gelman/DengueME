/****************************************************************************
** Meta object code from reading C++ file 'group.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/editor/group.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'group.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Group[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x05,

 // slots: signature, parameters, type, tag, flags
      26,    6,    6,    6, 0x08,
      37,    6,    6,    6, 0x08,
      58,    6,   51,    6, 0x0a,
      71,    6,   51,    6, 0x0a,
      81,    6,   51,    6, 0x0a,
      94,    6,   51,    6, 0x0a,
     108,    6,   51,    6, 0x0a,
     122,    6,   51,    6, 0x0a,
     147,    6,  136,    6, 0x0a,
     172,  167,  156,    6, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Group[] = {
    "Group\0\0heightChanged(int)\0onRemove()\0"
    "removeField()\0Field*\0addBoolean()\0"
    "addText()\0addInteger()\0addFloating()\0"
    "addCheckbox()\0addCombobox()\0ImportCsv*\0"
    "addCsv()\0Component*\0comp\0"
    "addComponent(Component*)\0"
};

void Group::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Group *_t = static_cast<Group *>(_o);
        switch (_id) {
        case 0: _t->heightChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onRemove(); break;
        case 2: _t->removeField(); break;
        case 3: { Field* _r = _t->addBoolean();
            if (_a[0]) *reinterpret_cast< Field**>(_a[0]) = _r; }  break;
        case 4: { Field* _r = _t->addText();
            if (_a[0]) *reinterpret_cast< Field**>(_a[0]) = _r; }  break;
        case 5: { Field* _r = _t->addInteger();
            if (_a[0]) *reinterpret_cast< Field**>(_a[0]) = _r; }  break;
        case 6: { Field* _r = _t->addFloating();
            if (_a[0]) *reinterpret_cast< Field**>(_a[0]) = _r; }  break;
        case 7: { Field* _r = _t->addCheckbox();
            if (_a[0]) *reinterpret_cast< Field**>(_a[0]) = _r; }  break;
        case 8: { Field* _r = _t->addCombobox();
            if (_a[0]) *reinterpret_cast< Field**>(_a[0]) = _r; }  break;
        case 9: { ImportCsv* _r = _t->addCsv();
            if (_a[0]) *reinterpret_cast< ImportCsv**>(_a[0]) = _r; }  break;
        case 10: { Component* _r = _t->addComponent((*reinterpret_cast< Component*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Component**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Group::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Group::staticMetaObject = {
    { &Component::staticMetaObject, qt_meta_stringdata_Group,
      qt_meta_data_Group, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Group::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Group::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Group::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Group))
        return static_cast<void*>(const_cast< Group*>(this));
    return Component::qt_metacast(_clname);
}

int Group::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Component::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Group::heightChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE