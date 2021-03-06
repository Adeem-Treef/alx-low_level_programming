#include "main.h"

/**
 * check_prime - check the code
 * @i: first argument
 * @num: number to be checked
 * Return: Always 0 or 1.
 */

int check_prime(int i, int num)
{
	if (i == num)
{
	return (1);
}
	else if (num % i == 0)
{
	return (0);
}
	else if (num > i)
{
	return (check_prime(i + 1, num));
}
	return (1);
}

/**
 * is_prime_number - check the code
 * @n: number to be checked
 * Return: Always 0 or 1.
 */

int is_prime_number(int n)
{
	if (n <= 1)
{
	return (0);
}
	return (check_prime(2, n));
}
