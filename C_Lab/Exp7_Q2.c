/*2.Write a C program to compute the monthly pay of 100 employees using each employee‗s name, basic pay. The DA is computed as 52% of the basic pay. Gross-salary (basic pay + DA). Print the employees name and gross salary. */
#include <stdio.h>

struct Employee {
    char name[50];
    float basic;
    float gross;
};

int main() {
    struct Employee emp[100];
    int i, n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", emp[i].name);

        printf("Enter basic pay: ");
        scanf("%f", &emp[i].basic);

        emp[i].gross = emp[i].basic + (0.52 * emp[i].basic);
    }

    printf("\nEmployee Details (GROSS SALARY):\n");
    for (i = 0; i < n; i++) {
        printf("Name: %s\t Gross Salary: %.2f\n",
               emp[i].name, emp[i].gross);
    }

    return 0;
}
