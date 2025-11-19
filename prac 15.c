#include <stdio.h>

int main() {
    int seconds;

    printf("Enter the starting number of seconds for the countdown: ");
    scanf("%d", &seconds);

    if (seconds < 0) {
        printf("Please enter a non-negative number.\n");
        return 1;
    }

    printf("\nStarting countdown...\n");

    while (seconds >= 0) {
        printf("%d\n", seconds);
        seconds--;
    }

    printf("Countdown completed!\n");
    printf("25ce097\n Manthan");

    return 0;
}
