#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter 3 sides of triangle -: \n");
    printf("Enter side 1: ");
    scanf("%d", &a);
    printf("Enter side 2: ");
    scanf("%d", &b);
    printf("Enter side 3: ");
    scanf("%d", &c);
    if (a + b > c && a + c > b && b + c > a) {
        printf("Valid Triangle\n");

        if (a == b && b == c)
            printf("Equilateral Triangle\n");
        else if (a == b || b == c || a == c)
            printf("Isosceles Triangle\n");
        else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
            printf("Right Angled Triangle\n");
        else
            printf("Scalene Triangle\n");
    } else {
        printf("Not a Valid Triangle\n");
    }

    return 0;
}
