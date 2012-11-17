#include<stdio.h>

void get_length(int *local_length) {
	printf("<~ Printing Arrows ~>\n");
	printf("How long of an arrow would you like to print? ");
	scanf("%d", &*local_length);
}

void draw_arrow(int *local_2_length) {
	int i;
	for(i=0; i<*local_2_length; i++) {
		putchar('-');
	}
	putchar('>');
	printf("\n");
}

int main() {
	int length;
	get_length(&length);
	draw_arrow(&length);
	return 0;
}
