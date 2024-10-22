#include <stdio.h>
/**
* main - Printing various data sizes by type
*
* Return = 0 (Success)
*/
int main(void)
{
	printf("size of char: %zu bytes\n", sizeof(char));

	printf("size of int: %zu bytes\n", sizeof(int));

	printf("size of long int: %zu bytes\n", sizeof(long int));

	printf("size of long long int: %zu bytes\n", sizeof(long long int));

	printf("size of float: %zu bytes\n", sizeof(float));

	return (0);
}
