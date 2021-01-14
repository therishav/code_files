/* WAP in C that accepts two strings s1 and s2 as input
Check if s2 is a substring of s1 or not. If s2 is a substring of s1, then the program
should output the starting location and ending location of s2 in s1. If s2 appears more
than once in s1, them the location of all instances have to be given
*/

#include <stdio.h>
#include <string.h>

int main (void) {
  char s1[50], s2[50];

  char *p1, *p2, *p3;
  int i=0, j=0, flag=0;

  printf("Enter two strings: \n");
  gets(s1); gets(s2);
  printf("The entered string is: %s %s\n", s1, s2);

  p1 = s1; p2 = s2;

  for (i=0; i<strlen(s1); i++) {
    if (*p1 == *p2) {
      p3 = p1; //Checks if the first letter matches

      for (j=0; j<strlen(s2); j++) { //Checks if all the consecutive letters match in thw word
        if (*p3 == *p2) {
          p3++; p2++;
        }
        else
          break;
      }
      p2 = s2;
      if (j == strlen(s2)) {
        flag = 1;
        printf("\nSubstring found at index: %d\n", i);
      }
    }
    p1++;
  }
  if (flag == 0) {
    printf("Substring NOT found");
  }
  return (0);
}
