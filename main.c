#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int len, len2;

	/* Test case: _printf("%d") and _printf("%i") */
	len = _printf("Integer:[%d]\n", -1024);
	len2 = printf("Integer:[%d]\n", -1024);
	_printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);

	len = _printf("Integer:[%i]\n", 1024);
	len2 = printf("Integer:[%i]\n", 1024);
	_printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);

	return (0);
}
