/* program to exploit fall-through switch */

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[argc+1]) {
	for (int i = 1; i < argc; ++i) {
		long n = strtol(argv[i], nullptr, 10); //aka atoi(argv[i] but safer
		switch(n) {
			case(0): printf("less than or equal to 0\n");
			case(1): printf("less than or equal to 1\n");
			case(2): printf("less than or equal to 2\n");
			case(3): printf("less than or equal to 3\n");
			case(4): printf("less than or equal to 4\n");
			case(5): printf("less than or equal to 5\n");
			case(6): printf("less than or equal to 6\n");
			case(7): printf("less than or equal to 7\n");
			case(8): printf("less than or equal to 8\n");
			case(9): printf("less than or equal to 9\n");
		}
	}
	return EXIT_SUCCESS;
}
