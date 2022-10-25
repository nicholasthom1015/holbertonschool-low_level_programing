#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
/**
 * struct printer - new struct type defining a printer
 * @print: function printer to a function that prints data types
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);

} print_t;

int sum_them_all(const unsigned int n, ...);

#endif
