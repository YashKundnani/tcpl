/*
 * File to perform operations of 1 D array
 * Assignment
 * Reading
 * Output on console
 * Passing to a function
 * Fetching from a function
 */

#include <stdio.h>

int main(){
	
	int num[] = {};
	//Output using Loop
	printf("Array:%d, %ld \n", sizeof(num), sizeof(num)); 
	for (int i =0; i<sizeof(num); i++){
		printf("%d ", num[i]);
	}

	return 0;
}
