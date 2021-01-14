#include <stdio.h>

// copy input to output: 1st version
int main (void) {
  int  c, a;

  /* printf("The value of EOF is: %d\n", EOF); */
  /* printf("The value of getchar() != EOF is: %d\n", getchar() != EOF); */

  /*
  c = getchar();
  while (c != EOF) {
    // printf("%s\n", );
    putchar(c);
    c = getchar();
  */


  /* 2nd more compact and better version */
  while((c = getchar()) != EOF)
    putchar(c);
}
