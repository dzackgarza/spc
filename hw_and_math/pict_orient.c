#include<stdio.h>

int main () {
	printf("<~ Orientation ~>\n");
	printf("Input the width and height of a picture, separarated by a space: ");
	int width, height;
	scanf("%d %d", &width, &height);
	if(width>height)
	{
		printf("Landscape\n");
	}
	else if (height>width)
	{
		printf("Portrait\n");
	}
	else if (height=width)
	{
		printf("Square\n");
	}
	return 0;
} 
