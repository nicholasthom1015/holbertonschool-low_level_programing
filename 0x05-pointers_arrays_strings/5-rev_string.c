#include "main.h"
/**
 * rev_string - reverse string
 * @s: test character
 */
void rev_string(char *s)
{
	int len = 0, index = 0;
	char tmp[999];

	while (s[index] != '\0')
	{
		tmp[index] = s[index];
		index++;
		len++;
	}
}
