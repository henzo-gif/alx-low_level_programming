#include <stdio.h>
/**
 * main - ENTRY POINT
 * Return: Always 0 (success)
 */
int main(void)
{
	char u;

	u = 'a';
	while (u <= 'z')
	{
		if ((u != 'q' && u != 'e' && u <= 'z')
		putchar(u);
		u++;
	}
	putchar('\n');
	return (0);

}
