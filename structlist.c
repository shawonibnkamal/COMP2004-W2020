#include <stdio.h>
#include <stdlib.h>

/* Modified example from K&R */

struct point {
  int x;
  int y;
};

struct pointlist {
  /* struct point coords; */
  int x;
  int y;
  struct pointlist *nextpoint;
};  // note the semi-colon ;

struct pointlist makepoint(int x, int y) {
  struct pointlist temp;
  temp.x = x;
  temp.y = y;
  temp.nextpoint = 0;  // Same as NULL
  return temp;
}  // no semi-colon

int main() {
  struct pointlist mypoint1, mypoint2;
  struct pointlist *i;
  mypoint1 = makepoint(5, 6);
  mypoint2 = makepoint(7, 8);
  // link mypoint1 to mypoint2
  mypoint1.nextpoint = &mypoint2;

  // Print the list of points
  {
    /***********************/
    /* Let's print the list of points */
    // List has known count of 2

    // point to start of list
    i = &mypoint1;

    // print header
    printf("curr ptr\tx\ty\tnext ptr\n");

    for (int j = 0; j < 2; j++) {
      printf("%p\t", i);
      printf("%d\t%d\t", i->x, i->y);
      printf("%p\n", i->nextpoint);

      i = i->nextpoint;
      // i = *i.nextpoint; // operator precedence
      // i = (*i).nextpoint; //
      // https://en.cppreference.com/w/c/language/operator_precedence
    }
    printf("-----------\n");
    /***********************/
  }

  // What if the length is unknown?
  /*
  {
    // Add an extra element
    struct pointlist mypoint3;
    mypoint3 = makepoint(rand()%30, rand()%30); //)*#$*&^%)!@#
    mypoint2.nextpoint = &mypoint3;

    i = &mypoint1;
    while (i != NULL) {
      printf("%p\t", i);
      printf("%d\t%d\t", (*i).x, (*i).y);
      printf("%p\n", i->nextpoint);
      i = (*i).nextpoint;
    }
    printf("-----------\n");
  }
  */

  // dynamically allocate the list
  /*
  {
    struct pointlist *makepointnode(int x, int y);  // What is this?
    struct pointlist *head, *temp, *tail;

    head = makepointnode(3, 4);
    tail = head;
    temp = makepointnode(5, 6);
    tail->nextpoint = temp;
    tail = temp;

    temp = makepointnode(7, 8);
    tail->nextpoint = temp;
    tail = temp;

    // Print the list again
    {
      i = head;
      while (i != NULL) {
        printf("%p\t", i);
        printf("%d\t%d\t", (*i).x, (*i).y);
        printf("%p\n", i->nextpoint);
        i = i->nextpoint;
      }
      printf("-----------\n");
    }
  }
  */

  // One last struct ...
  /*
  {
    typedef struct pointlist pt_t;
    pt_t *makepointnode(int x, int y);  // What is this?
    pt_t *head, *temp, *tail;

    head = makepointnode(3, 4);
    tail = head;
    temp = makepointnode(5, 6);
    tail->nextpoint = temp;
    tail = temp;

    // Print the list again
    {
      i = head;
      while (i != NULL) {
        printf("%p\t", i);
        printf("%d\t%d\t", (*i).x, (*i).y);
        printf("%p\n", i->nextpoint);
        i = i->nextpoint;
      }
      printf("-----------\n");
    }
  }
  */
}

struct pointlist *makepointnode(int x, int y) {
  struct pointlist *newnode;
  newnode = malloc(sizeof(struct pointlist));
  newnode->x = x;
  newnode->y = y;
  newnode->nextpoint = NULL;
  return newnode;
}