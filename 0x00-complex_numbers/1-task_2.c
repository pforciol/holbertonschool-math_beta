/* Write a function that returns the conjugate of a given complex number */

#include "complex.h"

/**
 * Conjugate - returns the conjugate of a complex number
 *
 * @c: the complex number to get the conjugate of
 *
 * Return: the conjugate of the c complex number
 */

double Conjugate(complex c)
{
	return (c.im);
}

/**
 * main - the main function containing tests
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	double complex c = 1 + 3*I;

	printf("Output: c = %.f\n", c);
	return (0);
}
