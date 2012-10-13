#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "globals.h"
#include "sort.h"
#include "reverse.h"
#include "io.h"

int main(int argc, char *argv[]) {

  int i = 0;
  int sort_flag = 0; // Must be flags so that functions may be called in proper order later.
  int reverse_flag = 0; 

  for (i=1; i < argc; i++) { // Cycle through arguments. 0 is the program's own name.
    if (!strcmp(argv[i], "-s")) sort_flag = 1;
    else if (!strcmp(argv[i], "-r")) reverse_flag = 1; 
    else {
      fprintf(stderr, "Error: Incorrect command line argument. Usage: %s [-s][-r]\n", argv[0]);
      exit(1);
    }

  }
  char arr[MAX_ROWS][MAX_COLS]; // This is our main array
  int rows = get_input(arr); // Necessary for functions that rely on bounded loops

  if(sort_flag)		sort(arr,rows);
  if(reverse_flag) 	reverse(arr,rows);
  display_output(arr, rows);

  return 0;
}
