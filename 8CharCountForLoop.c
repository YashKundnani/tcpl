#include <stdio.h>

void main(){
	double nc;
	for (nc = 0; getchar() != EOF; ++nc)
		;
	printf("%f\n",nc);
}


