#include "function_pointers.h"

/**
 *print_name - Function that prints a name
 *@name: The name given
 *@f: The name's function
 *Return: Void, no return
 */


void print_name(char *name, void (*f)(char *))
{
	if (f && name)
	f(name);
}
