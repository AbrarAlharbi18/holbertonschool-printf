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

/**
 * print_integer - Prints an integer
 * @num: Integer to print
 * Return: Number of characters printed
 */
int print_integer(int num)
{
	int count = 0;
	unsigned int absolute;

	if (num < 0)
	{
		count += _putchar('-');
		absolute = -num;
	}
	else
	{
		absolute = num;
	}

	if (absolute / 10)
		count += print_integer(absolute / 10);

	count += _putchar((absolute % 10) + '0');

	return (count);
}
