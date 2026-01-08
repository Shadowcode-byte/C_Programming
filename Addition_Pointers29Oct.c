/*Wap to add Two numbers using pointers */
#include <stdio.h>
void add(int *a, int *b, int *sum) {
    *sum = *a + *b;
}
int main() {
    int num1, num2, result;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    add(&num1, &num2, &result);
    printf("Sum: %d\n", result);
    return 0;
}