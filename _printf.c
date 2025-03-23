#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	if (!format)
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')  /* Handle case where '%' is the last character */
			{
				count += _putchar('%');
				break;
			}
			count += handle_format_specifier(*format, args);
		}
		else
		{
			count += _putchar(*format);
		}
		format++;
	}

	va_end(args);
	return (count);
}

/**
 * handle_format_specifier - Handles format specifiers
 * @specifier: Format specifier character
 * @args: va_list of arguments
 * Return: Number of characters printed
 */
int handle_format_specifier(char specifier, va_list args)
{
	switch (specifier)
	{
		case 'c':
			return (print_char(va_arg(args, int)));
		case 's':
			return (print_string(va_arg(args, char *)));
		case '%':
			return (print_percent());
		case 'd':
		case 'i':
			return (print_integer(va_arg(args, int)));
		default:
			/* If the specifier is invalid, print '%'t specifier */
			return (_putchar('%') + _putchar(specifier));
	}
}
