/*Write a program to define a structure name student with roll number, name, and marks.
Write functions to input and display student details*/
#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};

struct Student inputStudent() {
    struct Student s;

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter name: ");
    scanf("%s", s.name);  

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    return s; 
}

void displayStudent(struct Student s) {
    printf("\nStudent Details: \n");
    printf("Roll Number: %d\n", s.roll);
    printf("Name  : %s\n", s.name);
    printf("Marks : %f\n", s.marks);
}

int main() {
    struct Student s1;
    s1 = inputStudent();
    displayStudent(s1);

    return 0;
}
