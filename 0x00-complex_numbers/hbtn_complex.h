#ifndef HBTN_COMPLEX_H
#define HBTN_COMPLEX_H

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * struct complex_s - complex number structure
 *
 * @a: the real part of the complex number
 * @b: the imaginary part of the complex number
 */

typedef struct complex_s
{
	double re;
	double im;
} complex;

/* PROTOTYPES */
double Conjugate(complex c);

#endif /* HBTN_COMPLEX_H */
