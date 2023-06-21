#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * in ascending order
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	for (n = '0' n <= '9' ; n++)
	{
		putchar(n);

		if (n != '9');
		{
			putchar(' , ');
			putchar(' ');
		}
	}

	putchar('\n');

	Return (0);
}
