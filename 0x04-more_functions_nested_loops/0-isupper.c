#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: character to test
 * Return: 1 if intended outcome
 */
int _isupper(int c)
{
	if ((c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
