#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
/**
 * struct printer - new struct type defining a printer
 * @symbol: symbol representing data type
 * @print: function printer to a function that prints data types
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);

} print_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
#endif
