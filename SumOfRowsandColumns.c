/*Write a program to display the sum of rows and sum of columns of 3x3 matrix.*/
#include <stdio.h>

int main() {
    int matrix[3][3];
    int row_sum[3] = {0};
    int col_sum[3] = {0};
    printf("Enter elements of 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            row_sum[i] += matrix[i][j];
            col_sum[j] += matrix[i][j];
        }
    }
    printf("Sum of rows:\n");
    for (int i = 0; i < 3; i++) {
        printf("Row %d: %d\n", i + 1, row_sum[i]);
    }
    printf("Sum of columns:\n");
    for (int j = 0; j < 3; j++) {
        printf("Column %d: %d\n", j + 1, col_sum[j]);
    }

    return 0;
}
