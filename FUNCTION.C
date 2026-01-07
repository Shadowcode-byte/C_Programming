/*Write a program to accept 2 values from a user and pass these values to a function to compute the sum of these numbers return the sum and evaluate  whether the returned number is even or odd using another function.*/
#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

void even_or_odd(int num) {
    if (num % 2 == 0) {
        printf("The sum is even.\n");
    } else {
        printf("The sum is odd.\n");
    }
}

int main() {
    int num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    result = sum(num1, num2);
    printf("The sum is: %d\n", result);
    even_or_odd(result);
    return 0;
}
