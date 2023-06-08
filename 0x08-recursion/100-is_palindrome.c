#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
* is_palindrome - Function checks if a string is a palindrome
* @s: The string to reverse
* Return: To 1 if true, 0 if not
* @BySalma.as
*/

int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
* _strlen_recursion - Function returns the length of a string
* @s: The string to calculate the length of
* Return: To the length of the string
*/

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}

/**
* check_pal - Function checks the characters recursively for palindrome
* @s: The string to check
* @i: The iterator
* @lnt: The length of the string
* Return: To 1 if palindrome, to 0 if not
*/

int check_pal(char *s, int i, int lnt)
{
if (*(s + i) != *(s + lnt - 1))
return (0);
if (i >= lnt)
return (1);
return (check_pal(s, i + 1, lnt - 1));
}

