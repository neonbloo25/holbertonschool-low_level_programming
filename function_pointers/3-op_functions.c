#include "3-calc.h"
/**
 * op_add - adds ints
 * @a: int 1
 * @b: int 2
 * Return: result of add
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts ints
 * @a: int 1
 * @b: int 2
 * Return: result of subt
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies ints
 * @a: int 1
 * @b: int 2
 * Return: result of mult
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides ints
 * @a: int 1
 * @b: int 2
 * Return: result of division if good, exit100 if bad
 */
int op_div(int a, int b)
{
	if (b == 0)
		printf("Error\n");
		exit(100);

	return (a / b);
}
/**
 * op_mod - applies modulo to two ints
 * @a: int 1
 * @b: int 2
 * Return: result of modulo if good, exit100 if bad
 */
int op_mod(int a, int b)
{
	if (b == 0)
		printf("Error\n");
		exit(100);

	return (a % b);
}
