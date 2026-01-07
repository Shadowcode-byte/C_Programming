#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        sum = sum + (1.0/ i);   
    }
    printf("Sum of the series = %f\n", sum);
    return 0;
}