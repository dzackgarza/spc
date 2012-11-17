#include "globals.h"
#include <string.h>
#include <stdio.h>
void reverse(char arr[][MAX_COLS], int rows) {
  char temp[rows];
  int i;
  for (i = 0; i < (rows/2); i++) {
    strcpy(temp, arr[i]);
    strcpy(arr[i], arr[rows-i-1]);
    strcpy(arr[rows-i-1], temp);
  }		
}
