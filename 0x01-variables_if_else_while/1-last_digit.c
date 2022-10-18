#include <stdlib.h>
#include <time.h>
/*
 * print_last_digit - print the last digit of a number
 * @n: the number input
 * Return: value of the last digit
 */
int print_ last_ digit(int n)
{
int last_digit = n % 10;
if (last_digit < 0 )
last_digit = last_digit * -l;
_putchar(last_digit + '0');

return (last_digit);
}
