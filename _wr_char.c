#include "main.h"

/**
 * _wr_char - to write the character
 * @c: The character to print
 *
 * Return: success 1.
 */

int _wr_char(char c)
{
	return (write(1, &c, 1));
}
