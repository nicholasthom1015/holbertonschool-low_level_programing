#include <stdio.h>
/**
 * main - prints 0-9 with putchar
 * Return: 0 if intended outcome. Error otherwise
 */
int main(void)
{
	int number = (int) '0';

	for (number = '0' ; number <= '9' ; number++)
		putchar(number);

	return (0);
}
