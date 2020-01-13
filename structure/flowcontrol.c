#include <stdlib.h>
#include <stdio.h>

int main() {
/* for loop */
{
  for (int i = 0; i < 10; i++){
    printf("i = %i\n", i);
  }
}

/* while loop */
{
  int i = 0;
  while(i < 10){
    printf("i = %i\n", i);
    i++; /* i = i + 1 */
  }
}

/* for with break */
{
  int a[5] = {0, 1, 2, 3, 4};
  for( int i = 0; i<5; i++) {
    printf("Element %d is %d\n", i, a[i]);
    if(i==2)
      break;
  }
}

/* if-then-else */
{
  int i = 0;
  printf("Enter a number: ");
  scanf("%d", &i);
  if(i < 0) {
    printf("You entered a negative number\n");
  } else if (i < 100) {
    printf("You entered a number between 0 and 99\n");
  } else
    printf("Number > 99\n");
}
}
