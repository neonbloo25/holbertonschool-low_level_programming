#include "variadic_functions.h"
/**
 * print_all - prints input
 * @format: type of input
 */
void print_all(const char * const format, ...)
{
	char *str;
	unsigned int i = 0, comma = 0;
	va_list printAll;

	va_start(printAll, format);

	while (format && format[i])
	{
		if (comma)
			printf(", ");

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(printAll, int));
				break;
			case 'i':
				printf("%i", va_arg(printAll, int));
				break;
			case 'f':
				printf("%f", va_arg(printAll, double));
				break;
			case 's':
				str = va_arg(printAll, char *);
				if (str)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
				break;
			default:
				comma = 0;
				i++;
				continue;
		}
		comma = 1, i++;
	}
	putchar('\n');
	va_end(printAll);
}
