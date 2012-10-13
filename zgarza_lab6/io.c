#include <stdio.h>
#include <string.h>
#include "globals.h"

int get_input(char arr[][MAX_COLS]) {
	char temp[MAX_ROWS];
	int i = 0;
	while(fgets(arr[i], MAX_ROWS, stdin)) {
		strcpy(temp, arr[i]);
		i++;
	}
	printf("Number of words: %d \n", i);
	return i;
}

int display_output(char arr[][MAX_COLS], int rows) {
	
	int i = 0;
	while(i<rows) {
		fprintf(stdout, "Word #%d is %s",i,  arr[i]);
		i++;
	}
	printf("Number of words printed: %d\n", i);
	return i;
}
	
