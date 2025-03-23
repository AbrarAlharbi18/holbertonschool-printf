#include "main.h"

/**
 * _printf - Custom printf function
 * @format: The format string
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++; /* Move past the '%'*/
			count += handle_format_specifier(*format, args);
		}
		else
		{
			count += write(1, format, 1); /*Print the character*/
		}
		format++;
	}

	va_end(args);
	return (count);
}

/**
 * handle_format_specifier - Handles format specifiers
 * @specifier: The format specifier (e.g., 'c', 's', '%')
 * @args: The va_list of arguments
 * Return: Number of characters printed
 */
int handle_format_specifier(char specifier, va_list args)
{
	int count = 0;

	switch (specifier)
	{
		case 'c':
			count += print_char(va_arg(args, int));
			break;
		case 's':
			count += print_string(va_arg(args, char *));
			break;
		case '%':
			count += print_percent();
			break;
		default:
			count += write(1, "%", 1); /* Print the '%'*/
			count += write(1, &specifier, 1); /*Printtheunspecie*/
			break;
	}

	return (count);
}
