#include "palindrome.h"

/**
 * is_palindrome - This checks if given unsigned int is a palindrome
 * @n: This is the given number
 * Return:  Returns 1 if n is a palindrome, and 0 if not one
 * note: not allowed to allocate memory dynamically (malloc, calloc, etc)
 **/
int is_palindrome(unsigned long n)
{
	unsigned long rev = 0, a = 0, num = n;

	for (;n != 0; n = n / 10)
		a = n % 10, rev = rev * 10 + a;
	if (rev == num)
		return (1);
	return (0);
}

