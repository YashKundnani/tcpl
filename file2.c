#include <stdio.h>
#include <unistd.h>
int main(int argc, char * argv[]){
	printf("%d\n", argc);
	
	for (int i =0; i<argc; i++){
		printf("%s\n", argv[i]);
	}
	
	int second=0, minute=0, hour=0;
	while(1){
		clrsrc();
		printf("%d : %d : %d ", second, minute, hour);
	       	sleep(1);
		second++;
		if(second == 59){
			minute++;
			second = 0;
		}
		if (minute == 59){
			hour++;
			minute ==0;
		}
	}
}
