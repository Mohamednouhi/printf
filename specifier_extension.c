#include "main.h"
/**
 * _print_char - To print the character
 * @ls: arguments list
 * Return: to return the amount of character printed
 */
int _print_char(va_list ls)
{
	_wr_char(va_arg(ls, int));
	return (1);
}

/**
 * _print_strng - To print the string
 * @ls: arguments list
 * Return: to return the amount of character printed
 */
int print_strng(va_list ls)
{
	int i;
	char *stri;

	stri = va_arg(ls, char *);
	if (stri == NULL)
		stri = "(null)";
	for (i = 0; stri[i] != '\0'; i++)
		_wr_char(stri[i]);
	return (i);
}
/**
 * print_percent - to print a percent
 * @ls: arguments list
 * Return: to return the amount of characters printed.
 */
int _print_percent(__attribute__((unused))va_list ls)
{
	_wr_char('%');
	return (1);
}
