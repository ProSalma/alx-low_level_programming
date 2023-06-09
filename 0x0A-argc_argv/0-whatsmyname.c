#include "main.h"

/**
 * main - Function  that prints its name
 * @argv: The argument
 * @argc: The argument count
 * Return: To 0
 * BySalma.as
 */

int	main(int argc, char *argv[])
{
	int i = 0;

	while (argv[0][i] != '\0' && argc)
	{
		_putchar(argv[0][i]);
		++i;
	}
	_putchar('\n');
	return (0);
}
