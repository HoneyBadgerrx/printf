#include "main.h"
/**
 * get_func - gets right print func
 * @c: format specifier
 * Return: pointer to func
 */
int (*get_func(char c))(va_list)
{
	int i = 0;
	p P[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_int},
		{'i', print_int},
		{'b', print_bin},
		{'\0', NULL}
	};

	while (P[i].f != NULL)
	{
		if (P[i].c == c)
			return (P[i].f);
		++i;
	}
	return (NULL);
}
