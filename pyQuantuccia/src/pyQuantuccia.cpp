#include <Python.h>
#include "Quantuccia/ql/time/calendar.hpp"
#include "Quantuccia/ql/time/date.hpp"
#include "Quantuccia/ql/time/calendars/unitedkingdom.hpp"

static PyObject*
united_kingdom_is_business_day(PyObject *self, PyObject *args)
{
	int year;
	int month;
	int day;
    if (!PyArg_ParseTuple(args, "bbb|", &year, &month, &day))
        return NULL;
	QuantLib::Day d = new QuantLib::Day(day);
	QuantLib::Month m = new QuantLib::Month(month);
	QuantLib::Year y = new QuantLib::Year(year);
	QuantLib::Date date = new QuantLib::Date(d, m, y);
	QuantLib::Calendar calendar = new QuantLib::UnitedKingdom(QuantLib::UnitedKingdom::Market::Exchange);
    return PyBool_FromLong(calendar.isBusinessDay(date));
}
 
static PyMethodDef QuantucciaMethods[] = {
	{"united_kingdom_is_business_day", (PyCFunction)united_kingdom_is_business_day, METH_VARARGS, NULL},
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
