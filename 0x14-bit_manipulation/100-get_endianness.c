#include <stdio.h>
#include "holberton.h"
/**
 *get_endianness - get endianness
 *Return: 0 or 1
 */

int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *) &i;
if (*c)
	return (1);
else
	return (0);
}
