/*3.Write a function that accepts pointers as parameters. Pass variables by reference using pointers and modify their values within the function.*/
#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nBefore swap: a = %d, b = %d\n", a, b);
    
    swap(&a, &b);

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}
