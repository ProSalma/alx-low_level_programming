#include "3-calc.h"

/**
 * op_add - Calculates the sum of two numbers
 * @a: The 1st number
 * @b: The 2nd number
 * Return: The sum of paramters
 * @BySalma.as
 */


int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - Calculates the difference of two numbers
 * @a: The 1st number
 * @b: The 2nd number
 * Return: The difference of a and b
 * @BySalma.as
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - Multiplies two numbers
 * @a: The 1st number
 * @b: The 2nd number
 * Return: The result of a times b
 * @BySalma.as
 */

int op_mul(int a, int b)
{
	return (a * b);
}



/**
 * op_div - Calculates the division of two numbers
 * @a: The 1st number
 * @b: The 2nd number
 * Return: The result of a divided by b
 * @BySalma.as
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}


/**
 * op_mod - Calculates the modulus of two numbers
 * @a: The 1st number
 * @b: The 2nd number
 * Return: The result of a modulos b
 * @BySalma.as
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

