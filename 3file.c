#include <stdio.h>

int main(){
	float fahr, cel;
	int lower, upper, skip_step;

	lower = 20.0;
	upper = 300.0;
	skip_step = 10.0;

	fahr = lower;

	printf("Faherhit\tCelscius\n");
	while (fahr <= upper){
		cel = (5.0 * (fahr - 32.0))/9.0;
	       printf("%6.0f\t%6.0f\n", fahr, cel);
	       fahr = fahr + skip_step;
	       printf("%%");
	
	}
	cel = lower;
	printf("Celscius\tFaherhiet\n");
	while(cel <= upper)
	{
		fahr = ((cel + 32) * 9) / 5;
		printf("%4f\t%4f\n", cel, fahr);
		cel = cel + skip_step;
		
	}	
}
