/*Write a program in C language that accepts two matrices as input and prints
thier product
*/
#include <stdio.h>

int main(void) {
  int m, n, p, q, c, d, k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];

  printf("Enter no of rows and coloumns of first matrix\n");
  scanf("%d %d", &m, &n);
  printf("Enter elements of first matrix\n");

  for (c=0; c<m; c++) {
    for (d=0; d<n; d++) {
      scanf("%d", &first[c][d]);
    }
  }

  printf("Enter the no of rows and coloumns of second matrix\n");
  scanf("%d %d", &p, &q);

  if (n!=p) {
    printf("The matrices can't be multiplied by each other\n");
  }
  else {
    printf("Enter the elements of the second matrix\n");

    for (c = 0; c < p; c++) {
      for (d = 0; d < q; d++) {
        scanf("%d", &second[c][d]);
      }
    }

    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          sum = sum + first[c][k]*second[k][d];
        }

        multiply[c][d] = sum;
        sum = 0;
      }
    }

    printf("Product of the matrices:\n");

    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("%d\t", multiply[c][d]);

      printf("\n");
    }
  }

  return 0;
}
