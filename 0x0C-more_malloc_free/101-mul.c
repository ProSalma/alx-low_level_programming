#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _isdigit - Function checks if character is digit
 * @c: The character to check
 * Return: To 1 or 0
 * @BySalma.as
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}





/**
 * _strlen - Function returns the length of a string
 * @s: The string whose length to check
 * Return: To the integer
 */


int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}




/**
 * big_multiply - The multiply two big number strings
 * @s1: The !st big number string
 * @s2: The 2nd  big number string
 * Return: The big number string
 */


char *big_multiply(char *s1, char *s2)
{
char *r;
int l1, l2, a, b, c, d;

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	r = malloc(a = d = l1 + l2);
	if (!r)
		printf("Error\n"), exit(98);
	while (a--)
		r[a] = 0;

	for (l1--; l1 >= 0; l1--)
	{
		if (!_isdigit(s1[l1]))
		{
			free(r);
			printf("Error\n"), exit(98);
		}
		a = s1[l1] - '0';
		c = 0;

		for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
		{
			if (!_isdigit(s2[l2]))
			{
				free(r);
				printf("Error\n"), exit(98);
			}
			b = s2[l2] - '0';

			c += r[l1 + l2 + 1] + (a * b);
			r[l1 + l2 + 1] = c % 10;

			c /= 10;
		}
		if (c)
			r[l1 + l2 + 1] += c;
	}
	return (r);
}


/**
 * main - Function multiply two big number strings
 * @argc: The number of arguments
 * @argv: The argument vector
 * Return: Always 0 on success.
 */


int main(int argc, char **argv)
{
	char *r;
	int a, c, d;

	if (argc != 3)
		printf("Error\n"), exit(98);

	d = _strlen(argv[1]) + _strlen(argv[2]);
	r = big_multiply(argv[1], argv[2]);
	c = 0;
	a = 0;
	while (c < d)
	{
		if (r[c])
			a = 1;
		if (a)
			_putchar(r[c] + '0');
		c++;
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(r);
	return (0);
}
