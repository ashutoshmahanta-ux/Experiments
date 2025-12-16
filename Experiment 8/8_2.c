#include <stdio.h>

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int *ptr = numbers;  // Points to first number
    
    printf("Original: address %p, value %d\n", ptr, *ptr);
    
    ptr++;  // Move to next int (adds 4 bytes)
    printf("ptr++: address %p, value %d\n", ptr, *ptr);
    
    ptr--;  // Move back
    printf("ptr--: address %p, value %d\n", ptr, *ptr);
    
    ptr = ptr + 2;  // Jump 2 ahead
    printf("ptr+2: address %p, value %d\n", ptr, *ptr);
    
    return 0;
}
