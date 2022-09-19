#include <stdio.h>
/**
 * main - prints the full alphabet with putchar
 * Return: 0 if intented outcome. Error otherwise
 */
int main(void)
{
	char ch;

		for (ch = 'a' ; ch <= 'z' ; ch++)
	{		putchar(ch);
			putchar('\n');
	}
	return (0);
}
