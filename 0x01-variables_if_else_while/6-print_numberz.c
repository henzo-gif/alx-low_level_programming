#include <stdio.h>
/**
 * main - ENTRY POINT
 * Return: Always 0 (success)
 */
int main(void)
{
	int y;

	y = 0;

	while (y < 10)
	{
		putchar(y + '0');
		y++;
	}
	putchar('\n');
	return (0);
}
