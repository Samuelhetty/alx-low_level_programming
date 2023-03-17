#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line
 * Return: 0
 */
int main(void)
{       
        int i;
        
        for (i = 41; i < 51; i++)
        {       
                putchar(i);
        }       
        putchar('\n');
        return (0);
}       
