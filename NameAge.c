#include <stdio.h>

int main() {
    char name;
    int age;
    printf("Enter your name: ");
    scanf("%c", &name);
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Hello %c, you are %d years old.\n", name, age);

    return 0;
}
