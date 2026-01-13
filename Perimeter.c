#include <stdio.h>

int main() {
    float length, width, area, perimeter;

    printf("Enter length of rectangle: ");
    scanf("%f", &length);

    printf("Enter width of rectangle: ");
    scanf("%f", &width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("Area of rectangle = %f\n", area);
    printf("Perimeter of rectangle = %f\n", perimeter);

    return 0;
}
