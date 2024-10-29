#include <stdio.h>

#define LOWER 10
#define UPPER 300
#define STEP 10

int main(){
	for (int fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){
		printf("%d, %d, %d\n", LOWER, UPPER, STEP);
		printf("%d,\t%d\n", fahr, ((5 * (fahr - 32)) / 9));
	}
}
