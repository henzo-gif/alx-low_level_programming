#include <stdio.h>
/**
 * main - ENTRY POINT
 * Return: Always 0 (success)
 */
int main(void)
{
	char u;

	u = 'a';
	while (u <= 'z' && u != 'q' && u != 'e')
	{
		putchar(u);
		u++;
	}
	putchar('\n');
	return (0);

}
