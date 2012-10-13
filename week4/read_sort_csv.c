/* Reads in a file titled "homelistings.csv" and does the following:
	1) Sorts properties into small, medium, or large, depending on square footage [area]
	2) Produces a file for each zipcode containing the data of all homes therein.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void zip_sort() {
	FILE *in_file = fopen("homelistings.csv", "r");
	FILE *zipcode_out_file, *area_out_file;
	int zipcode, id, price, beds, baths, area;
	char address[100];
	while(fscanf(in_file, "%d,%d,%99[^,],%d,%d,%d,%d", 
		&zipcode, &id, address, &price, &beds, &baths, &area) != EOF) {
		
		// Problem Number Two
		char output_name[20];
		sprintf(output_name, "%d", zipcode); // Formats zipcode as a decimal and stores it in the char buffer.
		strcat(output_name, ".txt");

		zipcode_out_file = fopen(output_name, "a+");
		fprintf(zipcode_out_file, "%d,%d,%s,%d,%d,%d,%d\n", 
			zipcode, id, address, price, beds, baths, area);
		fclose(zipcode_out_file);
		
		// Problem Number One
		if(area<1000) strcpy(output_name, "small.txt");
		else if(area >= 1000 && area <= 2000) strcpy(output_name, "medium.txt");
		else if(area > 2000) strcpy(output_name,"large.txt");
		else strcpy(output_name,"error.txt");
		//printf("%s", output_name);	
		area_out_file = fopen(output_name, "a+");
		fprintf(area_out_file, "%s : %d\n", address, area);

		fclose(area_out_file);
	}
	fclose(in_file);
}

int main() {
	zip_sort();
	return 0;
}

