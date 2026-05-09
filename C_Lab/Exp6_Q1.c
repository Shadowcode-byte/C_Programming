/*Develop a recursive and non-recursive function FACT(num) to find the factorial of a number, n!, defined by FACT(n) = 1, if n = 0. Otherwise, FACT(n) = n * FACT(n-1.1). Using this function, write a C program to compute the binomial coefficient. Tabulate the results for different values of n and r with suitable messages. */
#include <stdio.h>

int FACT(int n) {
    if (n == 0)
        return 1;
    return n * FACT(n - 1);   // recursive
}

int FACT_NR(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;              // non-recursive
}

int main() {
    int n, r;

    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);

    int factRec = FACT(n);
    int factNR  = FACT_NR(n);

    printf("Recursive FACT(%d) = %d\n", n, factRec);
    printf("Non-Recursive FACT(%d) = %d\n", n, factNR);

    if (r <= n) {
        int nCr = FACT(n) / (FACT(r) * FACT(n - r));
        printf("Binomial Coefficient nCr = %d\n", nCr);
    } else {
        printf("Invalid (r > n)\n");
    }

    return 0;
}
