#include "holberton.h"
/**
 *swap_int - swap variables
 *@a: a
 *@b: b
 */
void swap_int(int *a, int *b)
{   
int temp = *a;
*a = *b;
*b = temp;
}
