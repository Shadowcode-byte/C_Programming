/*Write a program in C to count the total number of words in a string.*/
#include <stdio.h>
int main() {
    char str[100];
    int i, words = 1;
    printf("Enter a sentence: ");
    scanf("%[^\n]s", str);   
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            words++;
        }
    }
    printf("Total number of words = %d\n", words);
    return 0;
}