#include <stdio.h>

int main (void) {

  // Count the number of lines in input
  int c, nl;

  nl = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      nl++;
    }
  }
  printf("%d\n", nl);
  // return 0;
}
