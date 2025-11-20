/* Compute the first n decimal places of pi
 * I found the Bailey-Borwein-Plouffe formula and I was kind of confused with all
 * the "nth hexideximal digit" stuff as to what the output would look like, but
 * I tried it first in scheme and it seems like it works OK, after I got it here
 * I checked it versus some online sources and found out it is correct up to 15 places
 * which is normal for doubles */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char* argv[argc+1]) {
	for (int i = 1; i < argc; ++i) {
		int n = strtol(argv[i], nullptr, 10);
		double acc = 0.0;
		for (double k=0.0; k <= n; ++k) {
			acc = acc + 1/pow(16.0, k)*(4/(8.0*k+1.0)-2/(8*k+4)-1/(8*k+5)-1/(8*k+6));
		}
		printf("pi in %d places = %.*f \n", n, n, acc);
	}
	return EXIT_SUCCESS;
}
