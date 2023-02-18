#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes here */

/**
 * main - ENTRY POINT
 * Return: Always 0 (success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() -  RAND_MAX / 2;
if (n > 0)
printf("%dis positive", n);
else if  (n < 0)
printf("%dis negative", n);
else
printf("%dis zero", n);
return (0);
}
