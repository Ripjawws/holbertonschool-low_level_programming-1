#include "holberton.h"
/**
*
*
**/
void print_diagsums(int *a, int size)
{
	long int d1 = 0, d2 = 0;
	for (int i = 0; i < size; i++)
	{
		d1 += a[i, i];
		d2 += a[i, n - i - 1];
	}
	printf("%s, %s", d1, d2);
}
