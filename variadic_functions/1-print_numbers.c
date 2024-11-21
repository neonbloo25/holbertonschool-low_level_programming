#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: string to be used between numbers
 * @n: number of integers passed to function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list printNs;
	unsigned int i;
	int print_numbers;

	va_start(printNs, n);
	for (i = 0; i < n; i++)
	{
		print_numbers = va_arg(printNs, int);
		printf("%d", print_numbers);

		if (separator && i < n - 1)
			printf("%s", separator);
	}
	va_end(printNs);
	printf("\n");
}
