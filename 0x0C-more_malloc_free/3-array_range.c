#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - make  memory for an array
 * @min: int type
 * @max: int type
 * Return:  return pointer to array
 */

int *array_range(int min, int max)
{
	int *new;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	new = malloc((max - min + 1) * sizeof(int));
	if (new == 0)
	{
		return (NULL);
	}
	i = min;
	while (i <= max)
	{
		new[i] = min;
min++;
i++;
	}
	return (new);
}
