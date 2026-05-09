/*2.Write a program to apply left shift and right shift operator.*/
#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Left Shift (num << 1) = %d\n", num << 1);
    printf("Right Shift (num >> 1) = %d\n", num >> 1);

    return 0;
}
