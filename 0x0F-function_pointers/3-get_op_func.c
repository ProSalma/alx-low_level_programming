#include "3-calc.h"
#include <stdlib.h>
#include <string.h>


/**
 *get_op_func - gets the correct function for the operator
 *@s: the operator in hand
 *Return: returns function that takes two intgers and return an int
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};


int x;

x = 0;
while (ops[x].op)
	{
		if (s[0] == ops[x].op[0])
			return (ops[x].f);
	x++;
	}
return (NULL);
}
