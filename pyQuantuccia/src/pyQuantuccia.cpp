#include <Python.h>
#include "Quantuccia/ql/time/calendars/unitedstates.hpp"

static PyObject*
get_holiday_date(PyObject *self, PyObject *args)
{
    return NULL;
}
 
static PyMethodDef QuantucciaMethods[] = {
	{"get_holiday_date", (PyCFunction)get_holiday_date, METH_VARARGS, NULL},
	{NULL,     NULL}        /* Sentinel */
};

PyObject* PyInit_pyQuantuccia(void){
    PyObject *m;
    m = PyCreate_Module("quantuccia", QuantucciaMethods);
    return m;
}
