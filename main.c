#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int len, len2;

	/* Test case: _printf("%") */
	len = _printf("%");
	len2 = printf("%%");

	/* Print the lengths returned by _printf and printf */
	_printf("\nLength:[%d]\n", len);
	printf("Length:[%d]\n", len2);

	return (0);
}
