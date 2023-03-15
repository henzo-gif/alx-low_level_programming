#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array -  function that creates an array of chars
 * @size: size of array
 * @c: char to assign
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);
	if (str == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
