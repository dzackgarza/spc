#include<stdio.h>

int main() {					

	printf("<~ Calculate the Area of a Rectangle  ~>\n");
	printf("Enter height and width, separated by a space. ");
	int height, width;
	scanf("%d %d", &height, &width);
	printf("Area is %d\n", height * width);
	return 0;
}

