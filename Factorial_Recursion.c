/*Write a program to calculate a factorial of a number using recursion.*/
#include <stdio.h>

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Factorial of %d = %d\n", num, factorial(num));
    return 0;
}