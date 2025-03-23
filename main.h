#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/* Main Functions */
int _printf(const char *format, ...);
int handle_format_specifier(char specifier, va_list args);

/* Helper Functions */
int _putchar(char c);
int print_char(char c);
int print_string(char *str);
int print_percent(void);
int print_reverse(char *str);

#endif /* MAIN_H */
