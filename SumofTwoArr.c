/*wap to display the sum of two arrays*/
#include <stdio.h>

int main() {
    int arr1[100], arr2[100], sum[100];
    int n;

    printf("Enter the size of the arrays: ");
    scanf("%d", &n);

    printf("Enter elements of first array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of second array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < n; i++) {
        sum[i] = arr1[i] + arr2[i];
    }

    printf("Sum of the two arrays is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", sum[i]);
    }
    printf("\n");

    return 0;
}