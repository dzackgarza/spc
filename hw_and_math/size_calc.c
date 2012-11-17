#include<stdio.h>

int main() {

	printf("<~ Package Size Calculator ~>\n");
	printf("Enter the length, width, and height of a package, separated by spaces: ");
	float length, width, height;
	scanf("%f %f %f", &length, &width, &height);
	float girth = (height * 2) + (width * 2);
	if(length + girth > 84) {
		printf("Package is oversized!\n");
	}
	else if(length + girth <= 84) {
		printf("Package is appropriately sized.\n");
	}
	else {
		printf("Error!\n");
	}
	return 0;
}
