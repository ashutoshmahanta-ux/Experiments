#include <stdio.h>

int main() {
    int num = 10;
    float price = 99.5;
    char letter = 'A';
    
    // Pointers - like addresses
    int *p_int = &num;      // Points to num's address
    float *p_float = &price;
    char *p_char = &letter;
    
    printf("Variables:\n");
    printf("num = %d (address: %p)\n", num, &num);
    printf("price = %.1f (address: %p)\n", price, &price);
    printf("letter = %c (address: %p)\n\n", letter, &letter);
    
    printf("Pointers:\n");
    printf("p_int value = %p (points to %d)\n", p_int, *p_int);
    printf("p_float value = %p (points to %.1f)\n", p_float, *p_float);
    printf("p_char value = %p (points to %c)\n", p_char, *p_char);
    
    return 0;
}
