/*1.Write a program to apply bitwise OR, AND and NOT operators on bit level.*/
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("a & b = %d\n", a & b);  // AND
    printf("a | b = %d\n", a | b);  // OR
    printf("~a = %d\n", ~a);        // NOT

    return 0;
}
