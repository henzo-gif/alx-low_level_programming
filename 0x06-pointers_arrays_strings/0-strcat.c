#include "main.h"
/**
 * _strcat -  concatenates two strings.
 * @dest: input
 * @src: input
 * Return: Always 0 (uccess)
 */
char *_strcat(char *dest, char *src)
{
	int henok;
	int hena;

	henok = 0;
	while (dest[henok] != '\0')
	{
		henok++;
	}
			hena = 0;
			while (src[hena] != '\0')
			{
				dest[henok] = src[hena];
				henok++;
				hena++;
			}
				dest[henok] = '\0';
				return (dest);
}
