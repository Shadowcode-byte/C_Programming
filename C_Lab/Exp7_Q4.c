/*4.Create a union containing 6 strings: name, home_address, hostel_address, city, state and zip. Write a C program to display your present address. */
#include <stdio.h>

union Address {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[10];
};

int main() {
    union Address A;

    printf("Enter present address: ");
    fgets(A.hostel_address, sizeof(A.hostel_address), stdin);

    printf("\nYour present address is:\n");
    printf("%s", A.hostel_address);

    return 0;
}
