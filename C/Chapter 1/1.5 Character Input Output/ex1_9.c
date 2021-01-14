/*
Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or
more blanks by a single blank.


for one or more ' ' we need to replace them with one ' '
*/

#include <stdio.h>

int main (void) {

  int c, count = 0;

  while ((c = getchar()) != EOF) {

    if ((c != ' ') && (c != '\t')) {
      count = 0;
      putchar(c);
    }
    else {
      count++;
      if (count == 1) {
        // what to do if no of whitespaces if grreater than 1
        /* maybe we should not print those blank splaces   */
        c = ' ';
        putchar(c);
      }
    }
  }
}
