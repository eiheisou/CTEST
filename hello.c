#include <stdio.h>

int main()
{
    int kazu1 = 10;
    int *pointer = &kazu1;

    printf("*pointer: %d\n", *pointer); // 10

    int kazu2 = *pointer;
    *pointer = 20;
    printf("*pointer: %d\n", *pointer); // 20

    pointer = &kazu2;
    printf("*pointer: %d\n", *pointer); // 10

    getchar();
}