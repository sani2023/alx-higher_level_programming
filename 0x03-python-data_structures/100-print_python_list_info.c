#include <stdlib.h>
#include <stdio.h>
#include <Python.h>

/**
 * print_python_list_info - prnt sm bsc
 * @p: py lsit
 */
void print_python_list_info(PyObject *p)
{
	int element;

	printf("[*] Size of the python List = %lu\n", Py_SIZE(p));
	printf("[*] Allocated = %lu\n", ((PylistObject *)p)->allocated);
	for (element = 0; element < Py_SIZE(p); element++)
		printf("Element %d: %s\n", element, Py_TYPE(PyList_Getltem(p,
						element))->tp_name);
}
