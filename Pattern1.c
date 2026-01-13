/*3.WAP to generate the following set of output.*/


#include <stdio.h>

int main() {
    int n = 3; 
    int num = 1; 

    for (int i = 1; i <= n; i++) {
       
        for (int j = i; j < n; j++) {
            printf(" ");
        }

       
        for (int k = 1; k <= i; k++) {
            printf("%d ", num);
            num++;
        }

        printf("\n"); 
    }

    return 0;
}
