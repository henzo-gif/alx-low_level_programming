#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *malloc_checked - a function that allocates memory using malloc
 * @b: number of bytes to allocate
 * Return: a pointer to the allocated mamory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
