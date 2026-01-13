/*3.Declare variables within different code blocks (enclosed by curly braces) and test their accessibility within and outside those blocks.*/
#include <stdio.h>

int main() {
    int x = 10;  
    {
        int y = 20;  
        printf("Inside inner block: x = %d, y = %d\n", x, y);
    }
    printf("Outside inner block: x = %d\n", x);
    return 0;
}
