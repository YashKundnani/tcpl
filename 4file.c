//fahr and cel in for loop
#include <stdio.h>

int main(){
	for (int fahr = 0; fahr <= 300; fahr = fahr + 20){
		printf("%d\t%d\n", fahr, (5 * (fahr - 32)) / 9);
	}
}
