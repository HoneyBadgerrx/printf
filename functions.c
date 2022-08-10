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

	if (x == NULL)
		return (_printf("NULL"));
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
void recur(unsigned int x)
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
	int counter = 0, i = va_arg(vv, int);
	unsigned int x;
	char c;

	if (i < 0)
	{
		i = i * -1;
		c = '-';
		write(1, &c, 1);
		++counter;
	}
	x = i;
	recur(x);
	while (x != 0)
	{
		x = x / 10;
		++counter;
	}
	return (counter);
}
/**
 * binary - prints unsigned int in binary form
 * @i: unsigned int
 * Return: count of number given
 */
int binary(unsigned int i)
{
	int count = 0;
	char c;

	if (i == 0)
	{
		c = '0';
		write(1, &c, 1);
		return (0);
	}
	if (i == 1)
	{
		c = '1';
		write(1, &c, 1);
		return (0);
	}
	binary(i / 2);
	if (i % 2 == 0)
	{
		c = '0';
		write(1, &c, 1);
	}
	else
	{
		c = '1';
		write(1, &c, 1);
	}
	while (i != 0)
	{
		i /= 2;
		++count;
	}
	return (count);
}
