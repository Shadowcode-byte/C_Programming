/*1.Write a program to define some constant variable in preprocessor.*/
#include <stdio.h>

#define PI 3.14   // defining constant

int main() {
    float r, area;

    printf("Enter radius: ");
    scanf("%f", &r);

    area = PI * r * r;

    printf("Area of Circle = %.2f\n", area);

    return 0;
}
