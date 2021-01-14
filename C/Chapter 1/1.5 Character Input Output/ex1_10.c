/*
Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or
more blanks by a single blank.


for one or more ' ' we need to replace them with one ' '
*/

#include <stdio.h>

int main (void) {

  int c;

  while ((c = getchar()) != EOF) {

    if (c == '\t') {
      printf("\\t");

    }
    else if(c == '\b') {
        printf("\\b");
      }
    else if(c == '\\') {
      printf("\\");
    }
    else {
      printf("%c", c);
    }
  }
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t')
            printf("\\t");
        if (c == '\b')
            printf("\\b");
        if (c == '\\')
            printf("\\\\");
        else
            printf("%c", c);
    }
    return EXIT_SUCCESS;
}
*/
