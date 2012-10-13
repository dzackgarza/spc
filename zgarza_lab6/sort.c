#include "globals.h"
#include <string.h>
#include <stdio.h>

void sort(char arr[][MAX_COLS], int rows) {
  int pass, j;
  for (pass = 0; pass < rows-1; pass++) {
    for (j = 0; j < rows-1; j++) {
      if (strcmp(arr[j], arr[j+1]) > 0) {
	char temp[MAX_COLS];
	strcpy(temp, arr[j]);
	strcpy(arr[j], arr[j+1]);
	strcpy(arr[j+1], temp);
      }
    }
  }
}
