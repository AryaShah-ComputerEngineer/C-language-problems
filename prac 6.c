#include <stdio.h>

int main() {
    int celsius_values[] = {0, 100, -40};
    int i;
    for(i = 0; i < 3; i++) {
        float f = (celsius_values[i] * 9.0/5.0) + 32;
        printf("%d C = %.2f F\n", celsius_values[i], f);
    }

    printf("25ce097\n Manthan");
    return 0;
}
