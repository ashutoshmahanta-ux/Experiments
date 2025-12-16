#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[30];
    float price;
};

void showBook(struct Book b) {
    printf("ID: %d\n", b.id);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: Rs. %.2f\n", b.price);
}

int main() {
    struct Book book1;
    
    printf("Enter book info:\n");
    printf("ID: ");
    scanf("%d", &book1.id);
    
    printf("Title: ");
    scanf("%s", book1.title);
    
    printf("Author: ");
    scanf("%s", book1.author);
    
    printf("Price: ");
    scanf("%f", &book1.price);
    
    printf("\nYour book:\n");
    showBook(book1);
    
    return 0;
}
