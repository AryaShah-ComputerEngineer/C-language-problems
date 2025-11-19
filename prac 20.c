#include <stdio.h>

int main() {
    int n;
    int actualSum = 0;
    int tempID;

    printf("Enter the total number of participants (N): ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Invalid input. N must be at least 2.\n");
        return 1;
    }

    printf("Enter the %d unique attended participant IDs (in any order):\n", n - 1);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &tempID);
        actualSum = actualSum + tempID;
    }

    long long expectedSum = (long long)n * (n + 1) / 2;

    int missingID = (int)(expectedSum - actualSum);

    printf("\nThe missing participant ID is: %d\n", missingID);
printf("25ce097\n Manthan");
    return 0;
}
