#include "main.h"
/**
 * is-divisble - checks a number is divisble
 * @num: the number to be checked
 * @div: The divisor
 * Return: if the number is divisble -0
 * if the number is not divisble -1
 */
int is_divisble(int div, int num);
int is_prime_number(int n)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);
	return (is_divisble(num, div + 1));
}
