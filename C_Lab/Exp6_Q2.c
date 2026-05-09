/*2.Develop a recursive function GCD (num1, num2) that accepts two integer arguments. Write a C program that invokes this function to find the greatest common divisor of two given integers. */#include <stdio.h>

#include <stdio.h>

int GCD(int a, int b) {
    if (b == 0)
        return a;
    return GCD(b, a % b);
}

int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    printf("GCD = %d\n", GCD(x, y));
    return 0;
}
