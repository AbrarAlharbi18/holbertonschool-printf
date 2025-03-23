#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/* Function Prototypes */
int _printf(const char *format, ...);
int handle_format_specifier(char specifier, va_list args);
int _putchar(char c);
int print_char(char c);
int print_string(char *str);
int print_percent(void);

#endif /* MAIN_H */
