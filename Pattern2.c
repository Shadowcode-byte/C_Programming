/*3.WAP to generate the following set of output.
      1
     1 1
    1 2 1
   1 3 3 1
  1 4 6 4 1
 */
#include <stdio.h>

int main() {
    int n = 5;  
    int i, j, space, num;

    for (i = 0; i < n; i++) {
   
        for (space = 0; space < n - i - 1; space++) {
            printf(" ");
        }

        num = 1; 
        for (j = 0; j <= i; j++) {
            printf("%d ", num);
            num = num * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
