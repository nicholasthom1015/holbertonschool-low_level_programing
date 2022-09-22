#include "main.h"
/**
 * more_numbers - print 0-14
 */
void more_numbers(void)
{
	int count = 0;
	char num;

	while (count++ <= 9)
	{
		for (num = 0; num <= 14; num++)
			_putchar (num);
			_putchar ('\n');
	}
}
