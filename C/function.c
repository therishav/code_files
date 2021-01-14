#include<stdio.h>

int Increment (int a) {
  a = a + 1;
  printf("adress of a is %d\n", &a);
}

int main() {

  int a = 5;

  a = Increment(a);
  printf("%d\n", a);
  printf("adress of a is %d\n", &a);
}
