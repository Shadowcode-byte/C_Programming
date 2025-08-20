#include <stdio.h>
int main() {
float a, b, c, d;
printf("Enter values of a, b and c: ");
scanf("%f %f %f", &a, &b, &c);
d = (b*b)- (4*a*c); 
printf("Discriminant is %f",d );
if (d > 0) {
    printf("\nRoots are real and distinct");
    }
    else if (d == 0) {
        printf("\nRoots are real and equal");
    }
    else {
        printf("\nRoots are imaginary");
    }

    return 0;
}
