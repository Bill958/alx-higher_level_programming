#include <Python.h>

/**
 * print_python_list_info - Prints basic info about Python lists.
 * @p: A PyObject list.
 */
void print_python_list_info(PyObject *p)
{
    if (!PyList_Check(p)) {
        fprintf(stderr, "Invalid object provided. Expected a list.\n");
        return;
    }

    Py_ssize_t size = PyList_Size(p);
    Py_ssize_t allocated = ((PyListObject *)p)->allocated;

    printf("[*] Size of the Python List = %zd\n", size);
    printf("[*] Allocated = %zd\n", allocated);

    for (Py_ssize_t i = 0; i < size; i++) {
        PyObject *element = PyList_GetItem(p, i);
        const char *typeName = Py_TYPE(element)->tp_name;

        printf("Element %zd: %s\n", i, typeName);
    }
}
