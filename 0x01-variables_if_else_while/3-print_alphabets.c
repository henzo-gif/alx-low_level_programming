#include <stdio.h>
/**
 * main - ENTRY POINT
 * Return: Always 0 (success)
 */
int main(void)
{
	char a;

	char h;

	a = 'a';
	h = 'A';

	while (a <= 'z')
	{
		putchar('a');
		a++;
	}
	while (h <= 'Z')
	{
		putchar('a');
		h++;
	}
	putchar('\n');
	return (0);
}
