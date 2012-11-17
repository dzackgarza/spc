/* Zack Garza
 * System Programming with C, Barry Brown, Fall 2012
 *
 * This is a program that prints an arrow, the length of which is bound only
 * by your imagination! Or perhaps memory constraints.
 */

#include<stdio.h>

int get_length() {
	printf("<~ Printing Arrows ~>\n");
	printf("How long of an arrow would you like to print? ");
	
	int length;
	scanf("%d", &length);
	return length;
}

void draw_arrow (int length) {
	int i = 0;
	for(i=0; i<length; i++)
		putchar('-');
	putchar('>');
	printf("\n");
}

int main() {
	draw_arrow(get_length());
	return 0;
}
