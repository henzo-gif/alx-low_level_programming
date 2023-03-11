#include "main.h"
/**
 * find_sqrt - finds the natural square root of a number
 * @num: the number to find the square root of a number
 * @root: the root to be tested
 * Return: if the number has a natural square root - the square root
 * if the number does not have a natural square root --1.
 */
int find_sqrt(int num, int root);
int _sqrt_recursion(int n);
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);
	return (find_sqrt(num, root + 1));
}
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqrt(n, root));
}
