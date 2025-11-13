/* sizes of various integers, from the pointer tutorial
 * (https://github.com/jflaherty/ptrtut13/blob/master/md/ch1x.md)
 * I don't know if there are other sizes I should check */

#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("size of a short is %lu\n", sizeof(short));
	printf("size of a int is %lu\n", sizeof(int));
	printf("size of a long is %lu\n", sizeof(long));
}
