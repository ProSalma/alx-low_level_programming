#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - The Function
 * @c:  The 1st variable
 * @v: The 2nd variable
 * Return: To 0 or 1
 * BySalma.as
 */

int main(int c, char **v)
{
	if (c != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(v[1]) * atoi(v[2]));
	return (0);
}
