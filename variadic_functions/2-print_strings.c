#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: string to be used between strings
 * @n: number of string passed to function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list printSs;
	unsigned int i;
	char *print_strings;

	va_start(printSs, n);
	for (i = 0; i < n; i++)
	{
		print_strings = va_arg(printSs, char *);
		if (print_strings == NULL)
			printf("(nil)");
		else
			printf("%s", print_strings);

		if (separator && i < n - 1)
			printf("%s", separator);
	}
	va_end(printSs);
	printf("\n");
}
