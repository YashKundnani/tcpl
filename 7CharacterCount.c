// Counting charaters
// Counting lines
// Counting tabs
// Counting blanks
//
#include <stdio.h>


void main(){
	long nc;
	nc = 0;
	while (getchar() != EOF)
		++nc;
	printf("%ld\n", nc);
}
