#include <stdio.h>

void update(int *num, float *salary, char *initial) {
    *num = 25;        // Change original number
    *salary = 30000;  // Change original salary  
    *initial = 'B';   // Change original letter
}

int main() {
    int number = 10;
    float pay = 10000;
    char letter = 'A';
    
    printf("Before: number=%d, pay=%.0f, letter=%c\n", 
           number, pay, letter);
    
    update(&number, &pay, &letter);  // Send addresses
    
    printf("After: number=%d, pay=%.0f, letter=%c\n", 
           number, pay, letter);
    
    return 0;
}
