#include <stdio.h>

int main() {
    FILE *file;
    char line[100];
    file = fopen("example.txt", "r");
    if (file == NULL) return 1;
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
    fclose(file);
    return 0;
}
