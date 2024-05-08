#include "main.h"

/**
 * print_number - prints an interger
 * @n: the integer to ve printed.
 */

print_number(int n)
{
 	unsigned int num = n;

	/*first check if its negative */
	if (n < 0)
	{
		_puchar('-');
		num = -num;
	}

	/*print the last digit*/
	if ((num / 10) > 0)
		print_num = -num;
	
	/*print the last digit*/
	_putchar((num % 10) + 48);
}
