#include <stdio.h>
#include "holberton.h"
/**
 *set_bit - set bit
 *@n: n
 *@index: index
 *Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(n) * 8)
	{

	*n ^= (-1 ^ *n) & (1UL << index);

	return (1);
	}
	return (-1);
}
