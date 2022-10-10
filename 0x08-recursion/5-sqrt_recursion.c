#include "main.h"
/**
 * _sqrt - finds natural square root of given number
 * @n: base number
 * @root: tested root
 * Return: 0
 */
int _sqrt(int n, int root)
{
	if ((root * root) == n)
		return (root);

	if (root == n / 2)
		return (-1);

	return (_sqrt(n, root + 1));
}

/**
 * _sqrt_recursion - returns natural square roots of a number
 * @n: base number
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (_sqrt(n, root));
}
