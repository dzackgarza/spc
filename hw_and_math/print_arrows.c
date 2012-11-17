#include<stdio.h>

int main() {
	
	printf("<~ Printing Arrows ~>\n");
	printf("How long of an arrow would you like to print? ");
	int length;
	scanf("%d", &length);
	int i;
	for(i=0; i<length; i++) {
		putchar('-');
	}
	putchar('>');
	printf("\n");
	return 0;
}
