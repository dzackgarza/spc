#include<stdio.h>

int main() {

	int frac1a, frac1b, frac2a, frac2b;
	printf("<~ Adding Fractions ~>\n");
	printf("Note: Please enter all fractions in the form 'x/y'\n");
	printf("Input first fraction: ");
	scanf("%d/%d", &frac1a, &frac1b);
	printf("Input second fraction: ");
	scanf("%d/%d", &frac2a, &frac2b);

	int frac3a, frac3b;
	frac3b = frac1b * frac2b;
	frac3a = (frac1b * frac2a) + (frac2b * frac1a);
	printf("The answer is: %d/%d \n", frac3a, frac3b);
	return 0;
}
