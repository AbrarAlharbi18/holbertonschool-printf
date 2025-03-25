#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/* Function Prototype */
int _printf(const char *format, ...);
int handle_format_specifier(char specifier, va_list args);
int _putchar(char c);
int print_char(char c);
int print_string(char *str);
int print_percent(void);
int process_format(const char *format, va_list args);
int handle_conversion(char specifier, va_list args);
int print_number(int n);
int print_unsigned_number(unsigned int n);
#endif /* MAIN_H */
