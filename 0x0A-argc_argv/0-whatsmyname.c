#include <stdio.h>
#include <unistd.h>

/**
 * main - Function used
 * @c: The 1st variable
 * @v: The 2st Variable
 * Return: To 0
 * BySalma.as
 */

int main(int c, char **v)
{
	if (c > 0)
		printf("%s\n", *v);
	return (0);
}
