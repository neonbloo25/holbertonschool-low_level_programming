#include "main.h"
/**
 * binary_to_uint - converts from binary to unsigned
 * @b: Points to a binary string
 * Return: conversion/NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n;

	n = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		n = n << 1;
		if (*b != '1' && *b != '0')
			return (0);
		else if (*b == '1')
			n = n | 1;
		b++;
	}
	return (n);
}
