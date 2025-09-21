/*WAP to find the sum and product of the elements of anti diagonal*/
#include <stdio.h>

int main() {
    int n, i, j;
    int sum = 0, product = 1;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        sum += matrix[i][n - i - 1];
        product *= matrix[i][n - i - 1];
    }

    printf("Sum of anti-diagonal elements: %d\n", sum);
    printf("Product of anti-diagonal elements: %d\n", product);

    return 0;
}