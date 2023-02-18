#include <stdio.h>
/**
 * main - ENTRY POINT
 * Return: Always 0 (success)
 */
int main(void)
{
	char o;
	int a;

	o = 'a';
	a = 0;
	while (a <= 9)
	{
		putchar(a + '0');
		a++;
	}
	while (o <= 'f')
	{
		putchar(o);
		o++;
	}
	putchar('\n');
	return (0);
}
