#include "main.h"

/**
 * print_reverse - Prints a string in reverse
 * @str: String to print
 * Return: Number of characters printed
 */
int print_reverse(char *str)
{
	int count = 0;
	int len = 0;
	int i;

	if (str == NULL)
		str = "(null)";

	/* Calculate the length of the string*/
	while (str[len])
		len++;

	/*Print the string in reverse*/
	for (i = len - 1; i >= 0; i--)
	{
		count += _putchar(str[i]);
	}

	return (count);
}
