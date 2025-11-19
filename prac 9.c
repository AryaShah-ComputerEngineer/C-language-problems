#include <stdio.h>

int main() {
    double totalAmount;
    double discount = 0.0;
    double finalAmount = 0.0;

    printf("Enter the total shopping amount: ");
    scanf("%lf", &totalAmount);

    if (totalAmount < 1000) {
        discount = 0.0;
    } else if (totalAmount >= 1000 && totalAmount <= 5000) {
        discount = totalAmount * 0.10;
    } else {
        discount = totalAmount * 0.20;
    }

    finalAmount = totalAmount - discount;

    printf("\n--- ShopEase Checkout Bill ---\n");
    printf("Total Amount:     \u20B9%.2f\n", totalAmount);
    printf("Discount Applied: \u20B9%.2f\n", discount);
    printf("Final Amount Payable: \u20B9%.2f\n", finalAmount);
    printf("------------------------------\n");
printf("25ce097\n Manthan");
    return 0;
}
