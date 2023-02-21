#include <stdio.h>
/**
 * main - ENTRY POINT
 * Return: Always 0 (success)
 */
int main(void)
{
	char g;

	g = 'a';

	while (g <= 'z')
	{
		putchar(g);
		g++;
	}
	putchar('\n');
	return (0);
}
