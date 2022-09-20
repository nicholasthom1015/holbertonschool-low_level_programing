#include "main.h"
/**
 * print_sign - prints sign of number
 * @n: character to test
 * Return: 0 if intended outcome
 */
int print_sign(int n)
{
	if (n > 0)
	{	_putchar('+');
			return (1);
	}
	if (n == 0)
	{	_putchar(0);
			return (0);
	}
	if (n < 0)
	{	_putchar('-');
			return (-1);
	}
}
