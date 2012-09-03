#include <stdio.h>

void get_input() {	
	char string[100];
	printf("Enter the string you would like to work with:");
	fgets(string, 100, stdin);
	int i = 0;
	while(string[i] != "/n") {
		putchar(string[i]);
		i++;
	}
	printf("%s", string);
}

int main() {
	get_input();
//	reverse();
//	skip();
	return 0;
}

/*
void skip() {
}
*/
