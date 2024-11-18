#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - does as says on label
 * @f: function ptr name
 * @name: subject name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
