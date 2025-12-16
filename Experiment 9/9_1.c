#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("example.txt", "w");
    if (file == NULL) return 1;
    fprintf(file, "Hello! This is a sample text.\nWelcome to File Handling in C.");
    fclose(file);
    return 0;
}
