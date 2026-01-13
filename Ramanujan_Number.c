/*5.Ramanujan Number is the smallest number that can be expressed as the sum of two cubes in two different ways. WAP to print all such numbers up to a reasonable limit.
Example of Ramanujan number: 1729
12^3 + 1^3 and 10^3 + 9^3. for a number L=20(that is limit)*/
#include <stdio.h>

int main() {
    int L = 20;  
    int a, b, c, d;
    int num1, num2;

    printf("Ramanujan numbers up to limit %d are:\n", L);

    for (a = 1; a <= L; a++) {
        for (b = a + 1; b <= L; b++) {
            num1 = a*a*a + b*b*b;  

            for (c = a + 1; c <= L; c++) {
                for (d = c + 1; d <= L; d++) {
                    num2 = c*c*c + d*d*d;

                    if (num1 == num2) {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", num1, a, b, c, d);
                    }
                }
            }
        }
    }

    return 0;
}
