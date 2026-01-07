/*Write a program to create a structure employee (ID, Name, Basic Pay, DA, HRA, Gross Salary).
and write a function to calculate salary and display details.*/
#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    float basic, da, hra, gross;
};

struct Employee calculateSalary(struct Employee e) {
    e.gross = e.basic + e.da + e.hra;
    return e;
}

void displayEmployee(struct Employee e) {
    printf("\nEmployee ID: %d\n", e.id);
    printf("Name       : %s\n", e.name);
    printf("Basic Pay  : %.2f\n", e.basic);
    printf("DA         : %.2f\n", e.da);
    printf("HRA        : %.2f\n", e.hra);
    printf("Gross Pay  : %.2f\n", e.gross);
}

int main() {
    struct Employee e1;
    printf("Enter Employee ID: ");
    scanf("%d", &e1.id);
    printf("Enter Name: ");
    scanf("%s", e1.name);
    printf("Enter Basic Pay: ");
    scanf("%f", &e1.basic);
    printf("Enter DA: ");
    scanf("%f", &e1.da);
    printf("Enter HRA: ");
    scanf("%f", &e1.hra);
    e1 = calculateSalary(e1);
    displayEmployee(e1);
    
    return 0;
}
