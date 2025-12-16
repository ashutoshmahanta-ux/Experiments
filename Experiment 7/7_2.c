#include <stdio.h>

int main() {
    int i;
    char name[50];
    float basic, da, gross;
    
    printf("Enter 3 employees details:\n\n");
    
    for(i = 1; i <= 3; i++) {
        printf("Employee %d\n", i);
        printf("Name: ");
        scanf("%s", name);
        printf("Basic pay: ");
        scanf("%f", &basic);
        
        da = basic * 0.52;        // 52% DA
        gross = basic + da;       // Total salary
        
        printf("Gross salary: %.2f\n\n", gross);
    }
    
    return 0;
}
