/* program for exercise 8 */
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[argc+1]) {
	for (int i=1; i < argc; ++i) {
		char arg = argv[i][0];
		switch (arg) {
			case 'm': puts("this is a magpie");
								break;
			case 'r': puts("this is a raven");
								break;
			case 'j': puts("this is a jay");
								break;
			case 'c': puts("this is a chough");
								break;
			default: puts("this is an unknown corvid");
		}
		return EXIT_SUCCESS;
	}
}
/* the switch statement was given in the book and the exercise is to
 * test how it performs w/o breaks- with no breaks it returns the
 * matching block and all that come after. I wasn't sure how to get
 * the char from the command line, and am still not sure how I should
 * be handling say ./birds cardinal, which returns chough. With no arg,
 * exits successfully */
