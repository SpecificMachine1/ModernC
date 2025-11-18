/* Challenge 2: implement the numerical derivative
 * lim dx->0 (f(x+dx) - f(x))/dx */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

constexpr double dx = 0x1P-24; //I feel like this is the naive approach

/* got this style for passing returning expressions from:
 * https://www.spsanderson.com/steveondata/posts/2025-04-30/
 * for function pointers from:
 * https://stackoverflow.com/questions/9410/how-do-you-pass-a-function-as-a-parameter-in-c
 * not sure if either is good style */
double deriv(double (*f)(double), double x) {
 return ( ( (*f)(x + dx) - (*f)(x) ) / dx );
}

int main(void){
	double sin17 = sin(17);
	double sin17_prime = deriv(sin, 17);
	double cos17 = cos(17);
	double cos17_prime = deriv(cos, 17);
	printf("sin(17)= %f \t sin'(17)= %f \n", sin17, sin17_prime);
	printf("cos(17)= %f \t cos'(17)= %f \n", cos17, cos17_prime);
	return EXIT_SUCCESS;
}
