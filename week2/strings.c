/* Zack Garza
 * System Programming with C, Barry Brown, Fall 2012
 * 
 * This program takes an input string and then displays it two ways:
 * 1) Reversed
 * 2) With every other letter skipped
 */

#include <stdio.h>
#include <string.h>

const int max = 100; // The longest input string allowed
int i; // The loop variable used in each function

void get_input(char string[]) {	 
	printf("Enter the string you would like to work with: ");
	fgets(string, max, stdin);
}

void reverse(char string[]) {
	fputs("Reversed: ", stdout);
	for(i = strlen(string); i>=0; i--) {
		if(string[i] != '\n') // For formatting purposes
			putchar(string[i]);
	}	
}

void skip(char string[]) {
	fputs("Skipped: ", stdout);
	for(i=0; i<strlen(string); i+=2)
		putchar(string[i]);
}

void print_output(char output[]) {
	int i;
	for(i=0; i<strlen(output); i++)
		putchar(output[i]);
}

int main() {
	char input_string[max];
	get_input(input_string);
	reverse(input_string);
	printf("\n");
	skip(input_string);
	return 0;
}

