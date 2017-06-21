#include <Python.h>
#include "Quantuccia/ql/time/calendar.hpp"
#include "Quantuccia/ql/time/date.hpp"
#include "Quantuccia/ql/time/calendars/target.hpp"

typedef struct {
  PyObject_HEAD
  QuantLib::TARGET* obj;
} TargetCalendar;

static void
TargetCalendar_dealloc(TargetCalendar* self)
{
  delete self->obj;
  self->ob_type->tp_free((PyObject*)self);
}

static PyObject *
TargetCalendar_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  TargetCalendar *self;

  self = (TargetCalendar*)type->tp_alloc(type, 0);
  if (self != NULL) {
    self->obj = new QuantLib::TARGET;
  }

  return (PyObject *)self;
}

static PyMethodDef TargetCalendar_methods[] = {
  {NULL}  /* Sentinel */
};

static PyTypeObject TargetCalendarType = {
  PyObject_HEAD_INIT(NULL)
  0,                         /*ob_size*/
  "mod.TargetCalendar",             /*tp_name*/
  sizeof(TargetCalendar),           /*tp_basicsize*/
  0,                         /*tp_itemsize*/
  (destructor)TargetCalendar_dealloc, /*tp_dealloc*/
  0,                         /*tp_print*/
  0,                         /*tp_getattr*/
  0,                         /*tp_setattr*/
  0,                         /*tp_compare*/
  0,                         /*tp_repr*/
  0,                         /*tp_as_number*/
  0,                         /*tp_as_sequence*/
  0,                         /*tp_as_mapping*/
  0,                         /*tp_hash */
  0,                         /*tp_call*/
  0,                         /*tp_str*/
  0,                         /*tp_getattro*/
  0,                         /*tp_setattro*/
  0,                         /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE, /*tp_flags*/
  "Target Calendar class",           /* tp_doc */
  0,                         /* tp_traverse */
  0,                         /* tp_clear */
  0,                         /* tp_richcompare */
  0,                         /* tp_weaklistoffset */
  0,                         /* tp_iter */
  0,                         /* tp_iternext */
  TargetCalendar_methods,           /* tp_methods */
  0,                         /* tp_members */
  0,                         /* tp_getset */
  0,                         /* tp_base */
  0,                         /* tp_dict */
  0,                         /* tp_descr_get */
  0,                         /* tp_descr_set */
  0,                         /* tp_dictoffset */
  0,                         /* tp_init */
  0,                         /* tp_alloc */
  TargetCalendar_new,               /* tp_new */
};

static PyMethodDef module_methods[] = {
  {NULL}  /* Sentinel */
};

PyMODINIT_FUNC
initlibfoo()
{
  PyObject* m;

  if (PyType_Ready(&TargetCalendarType) < 0)
    return;

  m = Py_InitModule3("libfoo", module_methods, "Example module that creates an extension type.");
  if (m == NULL)
    return;

  Py_INCREF(&TargetCalendarType);
  PyModule_AddObject(m, "TargetCalendar", (PyObject *)&TargetCalendarType);
}