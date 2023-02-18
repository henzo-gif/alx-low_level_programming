#include <stdio.h>
/**
 * main - ENTRY POINT
 * Return: Always 0 (success)
 */
int main(void)
{
	int h;

	for (h = 0; h < 100; h++)
		putchar(h + '0');
	if (h < 99)
	{
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
