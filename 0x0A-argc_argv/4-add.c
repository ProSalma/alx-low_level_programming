#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Function adds positive numbers
 * @argc: The argument count
 * @argv: The argument vector
 * Return: sum of numbers
 */

int	main(int argc, char *argv[])
{
	int num;
	int sum = 0;
	int x, y;

	for (x = 1; y < argc; x++)
	{
		for (y = 0; argv[x][y]; y++)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[x]);
		if (num > 0)
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
