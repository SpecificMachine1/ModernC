#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[argc+1]) {
	//tested with no command line, gives seg fault
	int const count = strtol(argv[1], nullptr, 10);
	switch (count) {
		default:puts("+++ ..... +++");
		case 4: puts("++++");
		case 3: puts("+++");
		case 2: puts("++");
		case 1: puts("+");
		case 0:
	}
	return EXIT_SUCCESS;
}
