#include <stdio.h>

int main() {
    double population = 1441981744;
    double women_percent = 48.4;
    double men_percent = 100 - women_percent;

    double men_literacy = 80.95;
    double women_literacy = 62.84;

    double total_women = population * (women_percent / 100);
    double total_men = population * (men_percent / 100);

    double literate_women = total_women * (women_literacy / 100);
    double literate_men = total_men * (men_literacy / 100);

    double illiterate_women = total_women - literate_women;
    double illiterate_men = total_men - literate_men;

    printf("Illiterate Women: %.0f\n", illiterate_women);
    printf("Illiterate Men: %.0f\n", illiterate_men);
printf("25ce097\n Manthan");
    return 0;
}
