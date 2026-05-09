/*1.Write a C program that uses functions to perform the following operations: 
a.Reading a complex number. 
b.Writing a complex number. 
c.Addition and subtraction of two complex numbers */
#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;

Complex read() {
    Complex c;
    printf("Enter real and imaginary parts: ");
    scanf("%f %f", &c.real, &c.imag);
    return c;
}

void print(Complex c) {
    printf("%.2f + %.2fi\n", c.real, c.imag);
}

Complex add(Complex a, Complex b) {
    Complex r;
    r.real = a.real + b.real;
    r.imag = a.imag + b.imag;
    return r;
}

Complex subtract(Complex a, Complex b) {
    Complex r;
    r.real = a.real - b.real;
    r.imag = a.imag - b.imag;
    return r;
}

int main() {
    Complex c1, c2, sum, diff;

    printf("Enter first complex number:\n");
    c1 = read();

    printf("Enter second complex number:\n");
    c2 = read();

    sum = add(c1, c2);
    diff = subtract(c1, c2);

    printf("\nFirst Number: ");
    print(c1);

    printf("Second Number: ");
    print(c2);

    printf("Addition: ");
    print(sum);

    printf("Subtraction: ");
    print(diff);

    return 0;
}
