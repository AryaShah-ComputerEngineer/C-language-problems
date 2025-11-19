#include <stdio.h>

#define ROWS 5
#define SEATS 10

int main() {
    char chart[ROWS][SEATS];
    int numReserved;
    int resRow, resSeat;

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < SEATS; j++) {
            chart[i][j] = 'O';
        }
    }

    printf("Enter the number of reserved seats: ");
    scanf("%d", &numReserved);

    for (int i = 1; i <= numReserved; i++) {
        printf("Enter row and seat number for reserved seat %d (e.g., 2 5): ", i);
        scanf("%d %d", &resRow, &resSeat);

        if (resRow >= 1 && resRow <= ROWS && resSeat >= 1 && resSeat <= SEATS) {
            chart[resRow - 1][resSeat - 1] = 'X';
        } else {
            printf("Invalid seat number. Please try again.\n");
            i--;
        }
    }

    printf("\nSeating Chart:\n");
    for (int i = 0; i < ROWS; i++) {
        printf("Row %d: ", i + 1);
        for (int j = 0; j < SEATS; j++) {
            printf("%c ", chart[i][j]);
        }
        printf("\n");
    }
printf("25ce097\n Manthan");
    return 0;
}
