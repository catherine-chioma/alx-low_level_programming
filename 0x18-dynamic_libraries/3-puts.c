#include <stdio.h>
#include "main.h"

/**
 * _puts - function thst prints a string,followed by a new line,to stdout
 * @str: pointer value
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}

	putchar('\n');
}
