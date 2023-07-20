#include "main.h"
/**
 * print_sign(int n) - dtermines if the number
 * is greater than ,equall or less than zero
 *
 * @n - input number as an integer
 *
 * Return: +1  is greater than zero . 0 is equal to zero. -1 is less than zero.
 */
int print_sign(int n);
{
	if (n > 0)
	{
		_putchar (43);
		return (1);
	}
	if (n == 0)
	{
		_putchar (48);
		return (0);
	}
	if (n < 0)
	{
		_putchar (45);
		return (-1);
	}
	_putchar ("\n");
}
