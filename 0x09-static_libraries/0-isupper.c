#include "main.h"

/**
  * _isupper - checks for uppercase character.
  * @c: the char to be checked
  *
  * Return: 1 if char is uppercase letter, 0 otherwise
  */

int _isupper(int c)
{
	if  (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
