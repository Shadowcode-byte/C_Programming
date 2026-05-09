/*2.Write a program to define a function in directives.*/
#include <stdio.h>

#define SQUARE(x) (x * x)  // function-like macro

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Square = %d\n", SQUARE(num));

    return 0;
}
