#include <stdio.h>
/**
 * main - ENTRY POINT
 * Return: Always 0 (success)
 */
int main(void)
{
	int g;

	for (g = 012; g <= 789; g++)
	{
		printf("%.3d, ", g);
	}
	return (0);
}
