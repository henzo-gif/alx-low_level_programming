#include "main.h"
/**
 * main - check the code
 * @str: pointer to the string to [pprint
 * Return : Always 0 (success)
 */
void _puts(chhar *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
