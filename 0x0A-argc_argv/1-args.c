#include <stdio.h>
#include <unistd.h>

/**
 * main  - Function used
 * @c:  The 1st variable
 * @v: The 2nd Variable
 * Return: To 0
 */

int main(int c, char __attribute__((unused)) **v)
{
	printf("%d\n", c - 1);
	return (0);
}
