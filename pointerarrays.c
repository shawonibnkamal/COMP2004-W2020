#include <stdio.h>
#include <math.h>

int main () {
    int a[6] = {0, 1, 2, 3, 4, 5};
    int *pa = a;
    for (int i = 0; i < 7; i++)
    {
        printf("%d %d %p\n", i, *pa, pa);
        pa++;
    }
}
