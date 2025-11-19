#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            if (j % 2 == 1) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>

int main() {
    int n = 5;
    int width = 9;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= width; j++) {
            if (i == 1) {
                printf("%d ", j);
            } else if (j == i) {
                printf("%d ", i);
            } else if (j == width - i + 1) {
                printf("%d ", j);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>

int main() {
    int n = 5;

    for (int i = n; i >= 1; i--) {
        for (int s = 1; s <= n - i; s++) {
            printf("  ");
        }
        for (int j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        for (int j = 2; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    for (int i = 2; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) {
            printf("  ");
        }
        for (int j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        for (int j = 2; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>

int main() {
    int n = 4;

    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) {
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        for (int j = i - 2; j >= 0; j--) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int s = 1; s <= n - i; s++) {
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        for (int j = i - 2; j >= 0; j--) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    printf("25ce097 \n Manthan");
    return 0;
}

