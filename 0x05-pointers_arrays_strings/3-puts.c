#include "main.h"

/**
 * _puts - prints a string,followed by a new line.
 * @str: input string.
 * Return: no return.
 */
void _puts(char *str)
{
	int count = o;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_puutchar('\n');
			break;
		}
		_putchar(str[count]);
		count++;
	}
}
