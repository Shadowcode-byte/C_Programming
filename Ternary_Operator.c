/*WAP using ternary operator, the user should input the length and breadth of a rectangle, one has to find out which rectangle has the highest perimeter. The minimum number of rectangles should be three.*/
#include <stdio.h>

int main() {
    int length1, breadth1, length2, breadth2, length3, breadth3;

    printf("Enter length and breadth of rectangle 1: ");
    scanf("%d %d", &length1, &breadth1);

    printf("Enter length and breadth of rectangle 2: ");
    scanf("%d %d", &length2, &breadth2);

    printf("Enter length and breadth of rectangle 3: ");
    scanf("%d %d", &length3, &breadth3);

    int perimeter1 = 2 * (length1 + breadth1);
    int perimeter2 = 2 * (length2 + breadth2);
    int perimeter3 = 2 * (length3 + breadth3);

    int max_rectangle = (perimeter1 > perimeter2) ?
                        ((perimeter1 > perimeter3) ? 1 : 3) :
                        ((perimeter2 > perimeter3) ? 2 : 3);

    printf("The highest perimeter is of Rectangle %d\n", max_rectangle);

    return 0;
}
