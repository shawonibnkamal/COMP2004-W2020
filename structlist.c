#include <stdio.h>

struct point {
  int x;
  int y;
};

struct pointlist {
  /* struct point coords; */
  int x;
  int y;
  struct pointlist *nextpoint;
}; // note the semi-colon ;

struct pointlist makepoint(int x, int y) {
  struct pointlist temp;
  temp.x = x;
  temp.y = y;
  temp.nextpoint = 0;  // Same as NULL
  return temp;
} // no semi-colon

int main() {
  struct pointlist mp1, mp2;
  struct pointlist *i;
  mp1 = makepoint(5, 6);
  mp2 = makepoint(7, 8);
  // link mp1 to mp2
  mp1.nextpoint = &mp2;

  /***********************/
  /* Let's print the list of points */
  // List has known count of 2

  // point to start of list
  i = &mp1;

  // print header
  printf("curr ptr\tx\ty\tnext ptr\n");

  for (int j = 0; j < 2; j++) {
    printf("%p\t", i);
    printf("%d\t%d\t", i->x, i->y );
    printf("%p\n", i->nextpoint);  // operator precidence
    // printf("%p\n", (*i).nextpoint);  // operator precidence
    i = i->nextpoint;
  }
  printf("-----------\n");
  /***********************/

  // What if the length is unknown?
  {
    i = &mp1;
    while (i != NULL) {
      printf("%p\t", i);
      printf("%d\t%d\t", (*i).x, (*i).y);
      printf("%p\n", i->nextpoint);
      i = (*i).nextpoint;
    }
  }
}
