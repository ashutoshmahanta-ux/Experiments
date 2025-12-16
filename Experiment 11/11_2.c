//Write a program to apply left shift and right shift operator.

#include <stdio.h>

int main() {
    int num;  
    int LeftShift, RightShift;

    LeftShift = num << 1;  
    RightShift = num >> 1; 

    printf("Original number: %d\n", num);
    printf("After left shift by 1: %d\n", LeftShift);
    printf("After right shift by 1: %d\n", RightShift);

    return 0;
}