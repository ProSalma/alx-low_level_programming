#include <stdio.h>
#include <stdlib.h>

/**
 * is_valid_number - The Function used
 * @s:  The variable
 * Return: To 0 or 1
 * BySalma.as
 */


int is_valid_number(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (!(s[i] >= '0' && s[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}


/**
 * main  - The Function used
 * @argc:  The 1st variable
 * @argv: The 2nd variable
 * Return: To 0 or 1
 */

int main(int argc, char **argv)
{
	int i = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (argv[i])
	{
		if (!is_valid_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
