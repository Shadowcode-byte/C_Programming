#include <stdio.h>

struct Organization { //Creating a structure and initializing the variables and data types
    int empID;
    char empName[50];
    float salary;
    float commission;
    float overtime;
    int totalDays;
    int daysWorked;
};

struct Contractor {
    int contractID;
    char projectName[50];
    int projectDuration;
    int delayedDays;
    float projectAmount;
};

struct Employee {
    struct Organization org;
    struct Contractor contractor;
};

int main() {
    struct Employee emp;
    float absentDays, dailySalary, orgIncome, contractorIncome, totalIncome;

    printf("----- Enter Organization Details -----\n");
    printf("Enter Employee ID: ");
    scanf("%d", &emp.org.empID);

    printf("Enter Employee Name: ");
    scanf("%s", emp.org.empName);

    printf("Enter Monthly Salary: ");
    scanf("%f", &emp.org.salary);

    printf("Enter Commission: ");
    scanf("%f", &emp.org.commission);

    printf("Enter Overtime Amount: ");
    scanf("%f", &emp.org.overtime);

    printf("Enter Total Working Days in Month: ");
    scanf("%d", &emp.org.totalDays);

    printf("Enter Number of Days Worked: ");
    scanf("%d", &emp.org.daysWorked);

    absentDays = emp.org.totalDays - emp.org.daysWorked;
    dailySalary = emp.org.salary / emp.org.totalDays;
    orgIncome = emp.org.salary + emp.org.commission + emp.org.overtime - (absentDays * dailySalary);

    printf("\n----- Enter Contractor Details -----\n");
    printf("Enter Contract ID: ");
    scanf("%d", &emp.contractor.contractID);

    printf("Enter Project Name: ");
    scanf("%s", emp.contractor.projectName);

    printf("Enter Project Duration (in days): ");
    scanf("%d", &emp.contractor.projectDuration);

    printf("Enter Project Total Amount: ");
    scanf("%f", &emp.contractor.projectAmount);

    printf("Enter Delayed Days (if project was late): ");
    scanf("%d", &emp.contractor.delayedDays);

    contractorIncome = emp.contractor.projectAmount - (emp.contractor.delayedDays * 100);

    totalIncome = orgIncome + contractorIncome;

    printf("\n\n===== FINAL INCOME REPORT =====\n");
    printf("Employee Name  : %s\n", emp.org.empName);
    printf("Employee ID    : %d\n", emp.org.empID);
    printf("Income from Organization : %.2f\n", orgIncome);
    printf("Income from Contractor   : %.2f\n", contractorIncome);
    printf("\n");
    printf("TOTAL INCOME : %.2f\n", totalIncome);
    printf("\n");

    return 0;
}
