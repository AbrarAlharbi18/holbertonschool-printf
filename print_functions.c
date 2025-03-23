#include "main.h"

/**
 * _putchar - Writes a character to stdout
 * @c: Character to print
 * Return: Number of characters printed (always 1)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_char - Prints a character
 * @c: Character to print
 * Return: Number of characters printed (always 1)
 */
int print_char(char c)
{
	return (_putchar(c));
}

/**
 * print_string - Prints a string
 * @str: String to print
 * Return: Number of characters printed
 */
int print_string(char *str)
{
	int count = 0;

	if (!str)
		str = "(null)";

	while (*str)
	{
		count += _putchar(*str);
		str++;
	}

	return (count);
}

/**
 * print_percent - Prints a percent sign
 * Return: Number of characters printed (always 1)
 */
int print_percent(void)
{
	return (_putchar('%'));
}
