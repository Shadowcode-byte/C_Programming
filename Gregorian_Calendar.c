#include <stdio.h>
int main() {
int year;
printf("Enter a year: ");
scanf("%d", &year);
int leap_years = (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;
int total_days = (year - 1) * 365 + leap_years;
int day_of_week = total_days % 7;
switch (day_of_week) {
case 0: printf("1st January %d is a Monday\n", year); break;
case 1: printf("1st January %d is a Tuesday\n", year); break;
case 2: printf("1st January %d is a Wednesday\n", year); break;
case 3: printf("1st January %d is a Thursday\n", year); break;
case 4: printf("1st January %d is a Friday\n", year); break;
case 5: printf("1st January %d is a Saturday\n", year); break;
case 6: printf("1st January %d is a Sunday\n", year); break;
 }
return 0;
}