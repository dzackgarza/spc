/* Reads a file of customers via stdin, and outputs:
	1) Average age of all customers.
	2) Highest age read in.
	3) The oldest customer's name.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int id;
    char fname[50], lname[50], addr[50];
    int age;
    int sum = 0;
    int count = 0;
    int largest_age = 0;
    char oldest[50];

    while (!feof(stdin))
    {
        int returncode;
	returncode  = scanf("%d,%49[^,],%49[^,],%49[^,],%d", &id, fname, lname, addr, &age);
	// printf("Return code: %d", returncode);

	if(returncode == 5)
        {

            printf("id = %d, fname = %s, lname = %s, addr = %s, age = %d\n",
                id, fname, lname, addr, age);
            sum += age;
            count++;

            if ( age > largest_age )
            {
                largest_age = age;
                strcpy(oldest, fname);
            }
	else 
	{
		printf("Error\n");
		//printf("Error. Scanf returned %d\n", returncode);
		return 2;

		/* Diagnostic code - kept for future reference
		//printf("Return code: %d", returncode);
		//char error_contents[200];
		//scanf("%*[^\n]%*c%*c");
		//printf(stderr, "Invalid data found on line %d \n", (count+1));
	//	fprintf(stderr, "Last good values: id = %d, fname = %s, lname = %s, addr = %s, age = %d\n", id, fname, lname, addr, age);
		//fgets(error_contents, 200, stdin);
		//puts(error_contents);	
		*/	
        }

    	}
    }
    printf("sum = %d, count = %d\n", sum, count);
    printf("Average age is %f\n", (float)sum / count);
    printf("Largest age is %d\n", largest_age);
    printf("Oldest is %s\n", oldest);
    return 0;
}

