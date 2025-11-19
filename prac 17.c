#include <stdio.h>

int main() {
    double distance = 0.0;
    int minute = 0;
    double increment = 0.5;
    double target = 10.0;

    printf("Starting marathon tracking...\n");

    while (1) {
        minute++;
        distance += increment;

        printf("Minute %d: Distance covered = %.1f km\n", minute, distance);

        if (distance >= target) {
            printf("Marathon complete!\n");
            break;
        }
    }
printf("25ce097\n Manthan");
    return 0;
}
