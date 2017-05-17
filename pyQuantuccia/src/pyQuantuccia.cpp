#include <Python.h>
#include "Quantuccia/ql/time/calendars/unitedstates.hpp"

 PyObject* PyInit_pyQuantuccia(void){
     PyObject *m;
     m = PyInitModule("quantuccia", QuantucciaMethods);
     return m;
 }

static PyMethodDef QuantucciaMethods[] = {
	{"get_holiday_date", (PyCFunction)get_holiday_date, METH_VARARGS, NULL},
	{NULL,     NULL}        /* Sentinel */
};

 static PyObject*
 get_holiday_date(PyObject *self, PyObject *args)
 {
     return NULL;
 }