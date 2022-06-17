#include <stdio.h>
/**
 * main - program that prints all possible different combinations of 2 digits
 * Return: 0
 */
int main(void)
{
	int c = 0;
	int d;
	int e;

	while (c <= 99)
	{
		d = (c / 10 + '0');
		e = (c % 10 + '0');

		if (d < e)
		{
			putchar(d);
			putchar(e);

			if (c != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		c++;
	}
	putchar('\n');
	return (0);
}
