/*1.Declare different types of pointers (int, float, char) and initialize them with the addresses of variables. Print the values of both the pointers and the variables they point to.*/
#include <stdio.h>

int main() {
    int a = 10;
    float b = 25.5;
    char c = 'A';

    int *p = &a;
    float *q = &b;
    char *r = &c;

    printf("Value of a = %d, Address = %p\n", a, p);
    printf("Value of b = %.2f, Address = %p\n", b, q);
    printf("Value of c = %c, Address = %p\n", c, r);

    return 0;
}
