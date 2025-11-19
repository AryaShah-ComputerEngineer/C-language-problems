#include <stdio.h>

int main() {
    printf("--- City High School Library Catalog ---\n");

    for (int i = 1; i <= 50; i++) {
        printf("Book ID: %d", i);

        if (i % 5 == 0) {
            printf(" (Special Edition)");
        }

        printf("\n");
    }

    printf("----------------------------------------\n");
printf("25ce097 \n Manthan");
    return 0;
}
