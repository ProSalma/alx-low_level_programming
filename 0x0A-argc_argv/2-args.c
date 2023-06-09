#include <stdio.h>

/**
 *  main - program that prints all arguments
 *  Owned By MoOka
 *  @argc: The argument count
 *  @argv: The argument vector
 *  Return: To 0 if true
 */

int	main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
