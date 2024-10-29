//1.5 Charater Input Output 1.5.1 File Copying
//value of EOF
//getchar != char is 0 or 1 ?
#include <stdio.h>

void main(){
	int c;

/*
	while (1){
		c = getchar();
		if(c != EOF)
			putchar(c);
		else
			break;
		printf("%d\n", EOF);
	}*/

	if (getchar() != EOF){
		printf("If statement started [getchar() != EOF\n");
	}

	if(1){
		printf("If statement 1\n");
	}
	if (0){
		printf("If statement 0\n");

	}
}
