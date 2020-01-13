#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    if( argc < 2){
        printf("Not enough parameters\n");
        exit(1);
    }
    int num = atoi(argv[1]);
    printf("You passed: %d\n", num);
}
