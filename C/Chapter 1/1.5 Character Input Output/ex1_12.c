#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main() {

  int c, prevblank;

   prevblank = FALSE;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      if (prevblank == FALSE)
        putchar('\n');
      prevblank = TRUE;
    }
    else {
      prevblank = TRUE;
      putchar(c);
    }
  }

  return 0;
}
