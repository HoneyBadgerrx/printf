#include "main.h"
/**
 * print_bin - prints bin
 * @vv: valist
 * Return: count of char printed 
 */
int print_bin(va_list vv)
{
	int i = va_arg(vv, unsigned int);

	return (binary(i));
}
