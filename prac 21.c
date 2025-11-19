#include <stdio.h>

int main() {
    int num;
    int positiveCount = 0;
    int negativeCount = 0;
    int evenCount = 0;
    int oddCount = 0;

    printf("Please enter 25 integers:\n");

    for (int i = 1; i <= 25; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num > 0) {
            positiveCount++;
        } else if (num < 0) {
            negativeCount++;
        }

        if (num % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("\n--- Data Analysis Complete ---\n");
    printf("Positive numbers: %d\n", positiveCount);
    printf("Negative numbers: %d\n", negativeCount);
    printf("Even numbers:     %d\n", evenCount);
    printf("Odd numbers:      %d\n", oddCount);
    printf("------------------------------\n");

printf("25CE097\n Manthan");
    return 0;
}
