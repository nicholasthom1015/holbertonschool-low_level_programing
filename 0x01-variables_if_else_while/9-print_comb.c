#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Return: o if intended outcome. Error otherwise
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 9)
			continue;

		putchar(',');
		putchar(' ');

	}

	putchar('\n');

	return (0);
}
