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
int _print_strng(va_list ls)
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
 * _print_percent - to print a percent
 * @ls: arguments list
 * Return: to return the amount of characters printed.
 */
int _print_percent(__attribute__((unused))va_list ls)
{
	_wr_char('%');
	return (1);
}

/**
 * _print_int - to print a integer
 * @args: arguments list
 * Return: to return the amount of characters printed.
 */
int _print_int(va_list args)
{
	int number = va_arg(args, int);
	char buffer[10];

	/* Check if the number is negative.*/
	
	if (number < 0) 
	{
		_wr_char('-');
		number = -number;
	}
	
	/* Write the number to the buffer in decimal format.*/
	
	for (int i = 9; i >= 0; i--)
	{
		buffer[i] = (number % 10) + '0';
		number /= 10;
	}
	
	/*Write the buffer to stdout.*/
	
	for (int i = 0; i < 10; i++)
	{
		_wr_char(buffer[i]);
	}
}
