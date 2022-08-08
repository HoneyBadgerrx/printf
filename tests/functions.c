#include "main.h"
/**
 * print_char - prints char
 * @vv: valist
 * Return: how many times printed
 */
int print_char(va_list vv)
{
	char c = va_arg(vv, int);

	write(1, &c, 1);
	return (1);
}
/**
 * print_string - prints string
 * @vv: valist
 * Return: how many times printed
 */
int print_string(va_list vv)
{
	int i = 0, counter = 0;
	char *x = va_arg(vv, char*);

	while (x[i])
	{
		write(1, x + i, 1);
		counter++;
		++i;
	}
	return (counter);
}
/**
 * recur - prints int
 * @x: int
 * Return: void
 */
void recur(int x)
{
	char c;

	if (x == 0)
		return;
	if (x)
		recur(x / 10);
	c = 48 + (x % 10);
	write(1, &c, 1);
}
/**
 * print_int - prints int
 * @vv: valist
 * Return: number of times printed
 */
int print_int(va_list vv)
{
	int counter = 0, x = va_arg(vv, int);

	recur(x);
	while (x != 0)
	{
		x = x / 10;
		++counter;
	}
	return (counter);
}
