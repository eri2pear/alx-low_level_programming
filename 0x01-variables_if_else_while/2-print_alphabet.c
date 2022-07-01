#include <stdio.h>

/**
 * main - print the alphabet in lowercase,
 * start new line
 *return: 0 (for success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
