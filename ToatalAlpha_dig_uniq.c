/*Write a program in C to count the total number of alphabets, digits and special characters in a string.*/
#include <stdio.h>clear

int main() {
    char str[100];
    int i = 0;
    int alphabets = 0, digits = 0, special = 0;
    printf("Enter a string: ");
    gets(str);  
    while (str[i] != '\0') {
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
            alphabets++;
        else if (str[i] >= 48 && str[i] <= 57)
            digits++;
        else if (str[i] != 32)  
            special++;
        i++;
    }
    printf("Alphabets = %d\n", alphabets);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d\n", special);
    return 0;
}
