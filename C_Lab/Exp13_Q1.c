/*1.Write a program to define multiple macro to perform arithmetic functions.*/
#include <stdio.h>

#define ADD(x,y) ((x) + (y))
#define SUB(x,y) ((x) - (y))
#define MUL(x,y) ((x) * (y))
#define DIV(x,y) ((y) != 0 ? ((x) / (y)) : 0) // To avoid divide by zero error

int main() {
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Addition = %.2f\n", ADD(a, b));
    printf("Subtraction = %.2f\n", SUB(a, b));
    printf("Multiplication = %.2f\n", MUL(a, b));
    printf("Division = %.2f\n", DIV(a, b));

    return 0;
}
