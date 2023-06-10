#include <stdio.h>
#include <unistd.h>

/**
 * main - Function used
 * @c:  The 1st variable
 * @v: The 2nd variable
 * Return: To 0 if true
 * BySalma.as
 */

int main(int c, char **v)
{
	if (c > 0)
		printf("%s\n", *v);
	return (0);
}
