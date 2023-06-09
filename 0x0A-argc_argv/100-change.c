#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


/**
 * max - Function used
 * @coins:  The 1st variable
 * @final: The 2nd variable
 * Return: To integer s
 */


int max(int *coins, int final)
{
	int i = 0;
	int s = 0;

	while (i < 5)
	{
		if (coins[i] >= s && coins[i] <= final)
			s = coins[i];
		i++;
	}
	return (s);
}


/**
 * main - Function used
 * @c:  The 1st variable
 * @v: The 2nd variable
 * Return: To 0 or 1
 */

int main(int c, char **v)
{
	int cents;
	int coins[] = {25, 10, 5, 2, 1};
	int change = 0;

	if (c != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(v[1]);
	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}
	while (cents)
	{
		cents -= max(coins, cents);
		change++;
	}
	printf("%d\n", change);
	return (0);
}
