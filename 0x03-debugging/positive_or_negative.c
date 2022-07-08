#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - check if positive or negative
 * @i: Number will be checked
 *
 * Return: Always 0.
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
}
