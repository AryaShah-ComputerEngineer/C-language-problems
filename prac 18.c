#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the size of table vertically: ");
    scanf("%d", &rows);

    printf("Enter the size of table horizontally: ");
    scanf("%d", &cols);

    printf("\nMultiplication Table (%d x %d):\n", rows, cols);


    for (int i = 1; i <= rows; i++) {


        for (int j = 1; j <= cols; j++) {
            // Print the product of (row * column)
            // \t adds a tab for neat spacing
            printf("%d\t", i * j);
        }


        printf("\n");
    }
printf("25ce097 \n Manthan");
    return 0;
}
