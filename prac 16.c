#include <stdio.h>

int main() {
    int matchsticks = 21;
    int userPick = 0;
    int computerPick = 0;

    printf("Welcome to the 21 Matchstick Game!\n");
    printf("Rules: Pick 1, 2, 3, or 4 matchsticks.\n");
    printf("The player who picks the last matchstick loses.\n");
    printf("--------------------------------------------\n");
    printf("Game starts with 21 matchsticks.\n");

    // The game continues as long as there is more than 1 matchstick
    while (matchsticks > 1) {
        // --- User's Turn ---
        printf("\nThere are %d matchsticks.\n", matchsticks);
        printf("Your turn. Pick matchsticks (1-4): ");
        scanf("%d", &userPick);

        // Input validation
        while (userPick < 1 || userPick > 4 || userPick > matchsticks) {
            printf("Invalid pick. You must pick 1, 2, 3, or 4,\n");
            printf("and not more than the remaining %d matchsticks.\n", matchsticks);
            printf("Pick again: ");
            scanf("%d", &userPick);
        }

        matchsticks = matchsticks - userPick;
        printf("You picked %d. Matchsticks remaining: %d\n", userPick, matchsticks);

        // Check if user's pick ended the game (which shouldn't happen)
        if (matchsticks <= 0) {
            printf("You picked the last matchstick. You lose!\n");
            break;
        }

        // --- Computer's Turn ---
        // The winning strategy: always make the total picked in a round (user + computer) equal to 5.
        computerPick = 5 - userPick;

        printf("Computer picks %d.\n", computerPick);
        matchsticks = matchsticks - computerPick;
        printf("Matchsticks remaining: %d\n", matchsticks);
    }

    // If the loop ends, it means matchsticks is 1
    if (matchsticks == 1) {
        printf("\n--------------------------------------------\n");
        printf("There is only 1 matchstick left.\n");
        printf("You must pick the last matchstick. You lose!\n");
        printf("--------------------------------------------\n");
    }
    printf("25ce097\n Manthan");

    return 0;
}
