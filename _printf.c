#include "main.h"

/**
 * _printf - To receive  the main string and what is  necessary in  parameters to
 * print a formated string
 * @form: It contains all the desired characters
 * Return: amount of the characters printed
 */
int _printf(const char *form, ...)
{

	int _printed_chars;

	cnvert_t f_ls[] = {
		{"c", _print_char},
		{"s", _print_strng},
		{"%", _print_percent},
		{NULL, NULL}
	};

	va_list arg_lst;

	if (form == NULL)
		return (-1);

	va_start(arg_lst, form);

	_printed_chars = pars(form, f_ls, arg_lst);

	va_end(arg_lst);

	return (_printed_chars);
}
