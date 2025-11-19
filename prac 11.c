#include <stdio.h>

int main() {
    int marks;
    char grade;

    printf("Enter student marks (0-100): ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid Input: Marks must be between 0 and 100.\n");
    } else {
        grade = (marks >= 90) ? 'A' :
                (marks >= 80) ? 'B' :
                (marks >= 70) ? 'C' :
                (marks >= 60) ? 'D' : 'F';

        printf("Grade: %c\n", grade);
    }
printf("25ce097 \n Manthan");
    return 0;
}
