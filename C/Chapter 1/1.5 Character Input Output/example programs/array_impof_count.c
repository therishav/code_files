#include <stdio.h>

/* count digits, white spaces, others */
int main(int argc, char *argv[])
{
  int c, i, j, nwhite, nother, len;
  int ndigit[10];

  nwhite = nother = 0;
  for (i = 0; i < 10; ++i)
    ndigit[i] = 0;

  while ((c = getchar()) != EOF) {

    if (c >= '0' &&  c <= '9')
      ++ndigit[c-'0'];
    else if (c == ' ' || c == '\n' || c == '\t')
      ++nwhite;
    else
      ++nother;
  }
  /* make a horizontal histogram */
  printf("digits :\n");
  for (i = 0; i < 10; ++i) {
    printf(" %2d|  ", i+1);
    for (j = 0; j < ndigit[i]; j++) {
      printf("* ");
    }
    printf("\n");
  }

  printf(", white space = %d, other = %d\n", nwhite, nother);

  return 0;
}
