#include "main.h"
#include <stdio.h>
/**
 * _isdigit - check for a digit
 * @c: character to test
 * Return: 1 if intended outcome
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
