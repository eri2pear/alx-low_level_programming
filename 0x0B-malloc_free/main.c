#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - chaeck the code for ALX School students.
 *
 * Returns: Always 0.
 */
int main(void)
{
	char *s;

	s = _strdup("ALX SE");
	if (s == NULL)
	{
		printf("failed to allocatememory\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
