
#include <stdlib.h>

int main() {

  /* this is a C comment */
  // this is a C++ comment
  /* Integers */
  {
    short int h;
    int i; /* at least 16 bits */
    signed int i_;

    long ii;
    long int ii_;
    signed long int ii__;

    unsigned int ui; /* at least 16 bits */
}

/* Floating point */
{
  float j;
  double jj;
  long double jjj;
}

{
  char c; /* 8 bits? 16 bits? */
}

/* Arrays */
#define ARRAYSIZE 10
{
  int ai[ARRAYSIZE];
  char ac[ARRAYSIZE];
  float af[ARRAYSIZE];
  ai[0];
}

/* Pointers */
{
  int *pi; /* what is the size of the pointer? */
  pi = malloc(sizeof(int) * 10);
  /* How are ai and pi similar/different? */
  pi[0];
}
}
