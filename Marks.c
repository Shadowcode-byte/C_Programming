#include <stdio.h>
int main() {
int m1, m2, m3, m4, m5;
float total, percentage;
printf("Enter marks of Subject 1: ");
scanf("%d", &m1);
printf("Enter marks of Subject 2: ");
scanf("%d", &m2);
printf("Enter marks of Subject 3: ");
scanf("%d", &m3);
printf("Enter marks of Subject 4: ");
scanf("%d", &m4);
printf("Enter marks of Subject 5: ");
scanf("%d", &m5);
total = m1 + m2 + m3 + m4 + m5;
percentage = (total / 500) * 100;
printf("your percentage is %f \n", percentage);
if (percentage > 85) {
        printf("Your Grade is: O\n");
    } else if (percentage > 75) {
        printf("Your Grade is: A\n");
    } else if (percentage > 60) {
        printf("Your Grade is: B\n");
    } else if (percentage > 40) {
        printf("Your Grade is: C\n");
    } else if (percentage > 35) {
        printf("Your Grade is: D\n");
    } else {
        printf("Your Grade is: F\n");
    }

    return 0;
}

