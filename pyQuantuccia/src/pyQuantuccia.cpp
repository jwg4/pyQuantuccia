#include <Python.h>
#include "Quantuccia/ql/time/calendar.hpp"

static PyObject*
easter_monday(PyObject *self, PyObject *args)
{
	int year;
    if (!PyArg_ParseTuple(args, "year", &year))
        return NULL;
    return PyLong_FromLong(QuantLib::Calendar::WesternImpl::easterMonday(year));
}
 
static PyMethodDef QuantucciaMethods[] = {
	{"easter_monday", (PyCFunction)easter_monday, METH_VARARGS, NULL},
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

PyMODINIT_FUNC PyInit_quantuccia(void){
    PyObject *m;
    m = PyModule_Create(&quantuccia_module_def);
    return m;
}
