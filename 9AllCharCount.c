//program to count char, lines, tabs and blanks and character a
#include <stdio.h>

void main(){
	//using long gives strange results
	int c;
	int nl = 0, nc = 0, nt = 0, nb = 0, nca = 0;
	/* 
	for (
	for loop is not used in this because it is better to be used in where only one varible is changing
	*/
	while( (c = getchar()) != EOF){
			
		if ( c == '\n')
			++nl;
		
		if ( c == '\t')
			++nt;
		
		if ( c == 'a')
			++nca;

		if ( c == ' ')
			++nb;

		++nc;
		putchar(c);
	}
	printf("Lines: %d\n", nl);
	printf("Characters: %d\n", nc);
	printf("Tabs: %d\n", nt);
	printf("Char 'a': %d\n", nca);
	printf("Blanks: %d\n", nb);
}

