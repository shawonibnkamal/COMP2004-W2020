#include <stdio.h>

void swapvalue(int x, int y) {
  int temp;
  temp = x;
  x = y;
  y = temp;
}

void swappointer(int* x, int *y) {
  int temp;
  temp = x;
  x = y;
  y = temp;
}

int main() {
  int a = 97;
  int b = 98;
  printf("%d\t%d\n", a, b);
  swapvalue(a, b); /* swap the values */
  printf("%d\t%d\n", a, b);
  swappointer(&a, &b);/* swap the values */
  printf("%d\t%d\n", a, b);
}
