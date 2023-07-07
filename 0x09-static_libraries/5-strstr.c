#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *str1 = haystack;
		char *str2 = needle;

		while (*str1 == *str2 && *str2 != '\0')
		{
			str1++;
			str2++;
		}

		if (*str2 == '\0')
			return (haystack);
	}
	return (0);
}
