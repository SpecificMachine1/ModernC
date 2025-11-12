/* will try to come up with more useful comments later */
#include <stdlib.h> //source for size_t, EXIT_SUCCESS
#include <stdio.h>  //source for printf

/* main = what the program does */
int main(int argc, [[maybe_unused]] char* argv[argc+1]) {
	//Declarations
	//type var  = value or
	//type *var = location
	double A[5] = {    //an array
		[0] = 9.0,
		[1] = 2.9,
		[4] = 3.E+25,
		[3] = .00007,
	};

        //This compiles and shows the contents because size_t >= 0
	for (size_t i = 4; i < 5; --i) {
			printf("element %zu is %g, \tits square is %g\n",
				i,
				A[i],
				A[i]*A[i]);
	}

	return EXIT_SUCCESS;
}

