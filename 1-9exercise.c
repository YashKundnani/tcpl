//Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.
#include <stdio.h>

void main(){
	int char1;
	while ((char1 = getchar()) != EOF){
		putchar(char1);
		if (char1 == ' '){
			int nullchar = '\0';
			while(1){
				int temp = getchar();
				if (temp != ' '){
					putchar(temp);
					break;
				}
			}
			
		}
	}
}
