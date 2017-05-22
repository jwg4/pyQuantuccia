#include <Python.h>
#include "Quantuccia/ql/time/calendars/unitedstates.hpp"

static PyObject*
get_holiday_date(PyObject *self, PyObject *args)
{
    return NULL;
}
 
static PyMethodDef QuantucciaMethods[] = {
	{"get_holiday_date", (PyCFunction)get_holiday_date, METH_VARARGS, NULL},
	{NULL, NULL, 0, NULL}
};

static struct PyModuleDef quantuccia_module_def = {
	PyModuleDef_HEAD_INIT,
	"quantuccia",
	NULL,
	-1,
	QuantucciaMethods,
	NULL,
	NULL,
	NULL,
	NULL
};

int*** PyInit_pyQuantuccia(void){
    PyObject *m;
    m = PyModule_Create(&quantuccia_module_def);
    return m;
}
