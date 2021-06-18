#include <stdio.h>

/**
 * main - Entry a number to the variable n and print character.
 *
 * Description: Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c, d;

	for (d = '0' ; d <= '9' ; d++)
{
		for (c = '0' ; c <= '9' ; c++)
		{
		putchar(d);
		putchar(c);
		if (c == '9' && d == '9')
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
	putchar('\n');
return (0);
}
