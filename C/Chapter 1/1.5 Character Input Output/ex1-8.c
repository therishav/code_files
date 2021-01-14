// Exercise 1-8. Write a program to count blanks, tabs, and newlines
#include<stdio.h>

int main(void) {

  int b = 0, t = 0, l = 0, c; //b = blanks; t = tabs; l = newlines; c = charinput
  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      b++;
    }
    else if (c == '\t') {
      t++;

    }
    else if (c == '\n') {
      l++;
    }
  }

  // printing out the Count
  printf("Blanks: %d, Tabs: %d, Newlines: %d\n", b, t, l);

}
