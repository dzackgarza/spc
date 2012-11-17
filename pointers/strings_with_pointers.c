/* Zack Garza
 * System Programming with C, Barry Brown, Fall 2012
 * 
 * This program takes an input string and then displays it two ways:
 * 1) Reversed
 * 2) With every other letter skipped
 * Version 2.0: Now with more pointer fun, free of charge!
 */

#include <stdio.h>
#include <string.h>

const int max = 100; // The longest input string allowed
int i = 0; // The loop variable used in each function

void get_input(char *input_string) {	 
	printf("Enter the string you would like to work with: ");
	fgets(input_string, max, stdin);
}

void reverse(char *reverse_string) {
	fputs("Reversed: ", stdout);
	int bound = max;
	int canwrite = 0;
	while(reverse_string <= reverse_string+bound) {
		if(canwrite == 1)
			putchar(*(reverse_string+bound));
		if(*(reverse_string+bound) == '\n')
			canwrite = 1;
		bound--;
	}
	printf("\n");

}

void skip(char *skip_string) {
	fputs("Skipped: ", stdout);
	int i = 0;
	while (*(skip_string+i) !=  '\0') {
		putchar(*(skip_string+i));
		i+=2;
	}
	printf("\n");
}

int main() {
	char input_string[max];
	get_input(input_string);
	reverse(input_string);
	skip(input_string);
	return 0;
}

