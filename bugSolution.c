#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
  int x = 10;
  int *ptr = &x;

  //Check for potential overflow before assigning
  if (x + 10 > INT_MAX || x + 10 < INT_MIN){
      fprintf(stderr, "Error: Integer overflow detected.\n");
      return 1;
  } else {
      *ptr = x + 10;
  }
  printf("%d", x);
  return 0;
}
