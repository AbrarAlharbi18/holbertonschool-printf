#include "main.h"

/**
 * print_char - Prints a single character
 * @c: The character to print
 * Return: Number of characters printed (always 1)
 */
int print_char(char c)
{
    return write(1, &c, 1);
}

/**
 * print_string - Prints a string
 * @str: The string to print
 * Return: Number of characters printed
 */
int print_string(char *str)
{
    int count = 0;

    if (str == NULL)
        str = "(null)";

    while (*str)
    {
        count += write(1, str, 1);
        str++;
    }

    return count;
}

/**
 * print_percent - Prints a percent sign
 * Return: Number of characters printed (always 1)
 */
int print_percent(void)
{
    return write(1, "%", 1);
}
