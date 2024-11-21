#include "variadic_functions.h"
/**
 * sum_them_all - adds em all up
 * @n: number of accepted elements into the sum
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list xyz;
	unsigned int i;
	int sum_them_all = 0;

	if (n == 0)
		return (0);

	va_start(xyz, n);
	for (i = 0; i < n; i++)
		sum_them_all += va_arg(xyz, int);
	va_end(xyz);
	return (sum_them_all);
}
