/*4.The population of a town is 100000. The population has increased steadily at the rate of 10% per year for the last 10 years. Write a program to determine the population at the end of each year in the last decade.*/
#include <stdio.h>

int main() {
    int initial_population = 100000;
    float growth_rate = 0.10;
    int years = 10;
    float population = initial_population;
    printf("Year\tPopulation\n");
    for (int i = 1; i <= years; i++) {
        population += population * growth_rate;
        printf("%d\t%.2f\n", i, population);
    }

    return 0;
}