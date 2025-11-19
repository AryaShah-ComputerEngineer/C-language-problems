#include <stdio.h>

int main() {
    int choice = -1;
    int totalAmount = 0;

    do {
        printf("\n------- Welcome to Foodies Menu -------\n");
        printf("1. Burger       -\n");
        printf("2. Pizza        -\n");
        printf("3. Pasta        -\n");
        printf("4. Sandwich     -\n");
        printf("5. French Fries -\n");
        printf("0. Finish Order and Get Bill\n");
        printf("---------------------------------------\n");
        printf("Enter item number to order: ");

        scanf("%d", &choice);

        switch (choice) {
            case 1:
                totalAmount += 150;
                printf("Added Burger. Current total: \u20B9%d\n", totalAmount);
                break;
            case 2:
                totalAmount += 200;
                printf("Added Pizza. Current total: \u20B9%d\n", totalAmount);
                break;
            case 3:
                totalAmount += 120;
                printf("Added Pasta. Current total: \u20B9%d\n", totalAmount);
                break;
            case 4:
                totalAmount += 100;
                printf("Added Sandwich. Current total: \u20B9%d\n", totalAmount);
                break;
            case 5:
                totalAmount += 80;
                printf("Added French Fries. Current total: \u20B9%d\n", totalAmount);
                break;
            case 0:
                printf("Finishing order...\n");
                break;
            default:
                printf("Invalid choice! Please select a valid item number from the menu.\n");
                break;
        }

    } while (choice != 0);

    printf("\n========= Your Final Bill =========\n");
    printf("Total Amount Payable: %d\n", totalAmount);
    printf("Thank you for visiting Foodies!\n");
    printf("=================================\n");
printf("25ce097\n Manthan");
    return 0;
}
