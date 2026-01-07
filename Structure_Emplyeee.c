#include <stdio.h>
struct Employee {
    int empID;
    char name[50];
    char designation[50];
    char department[50];
    float salary;
};
int main() {
    struct Employee e;
    printf("Enter Employee ID: ");
    scanf("%d", &e.empID);

    printf("Enter Name: ");
    scanf("%s", e.name);

    printf("Enter Designation: ");
    scanf("%s", e.designation);

    printf("Enter Department: ");
    scanf("%s", e.department);

    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    printf("\nEmployee Details:\n");
    printf("ID: %d\n", e.empID);
    printf("Name: %s\n", e.name);
    printf("Designation: %s\n", e.designation);
    printf("Department: %s\n", e.department);
    printf("Salary: %.2f\n", e.salary);

    return 0;
}