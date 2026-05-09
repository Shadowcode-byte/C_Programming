/*2.Perform pointer arithmetic (increment and decrement) on pointers of different data types. Observe how the memory addresses change and the effects on data access.*/
#include <stdio.h>

int main() {
    int x = 100;
    int *p = &x;

    printf("Pointer p = %p\n", p);
    p++;
    printf("After p++, Pointer p = %p\n", p);
    p--;
    printf("After p--, Pointer p = %p\n", p);

    return 0;
}
