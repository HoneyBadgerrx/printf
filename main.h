#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * struct printer - format for printing
 * @c: char specifier
 * @f: function
 */
typedef struct printer
{
	char c;
	int (*f)(va_list vv);
} p;
int _printf(const char *format, ...);
int print_char(va_list vv);
int print_string(va_list vv);
int print_int(va_list vv);
int (*get_func(char c))(va_list);
void recur(unsigned int x);
int binary(unsigned int i);
int print_bin(va_list vv);

#endif /* main_h */
