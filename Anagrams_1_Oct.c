/*Write a program to check Whether Two Strings are Anagrams or not.*/
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, j, len1 = 0, len2 = 0;
    char temp;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    for (i = 0; str1[i] != '\0'; i++) {
        len1++;
    }
    for (i = 0; str2[i] != '\0'; i++) {
        len2++;
    }
    if (len1 != len2) {
        printf("The strings are NOT Anagrams.\n");
        return 0;
    }
    for (i = 0; i < len1 - 1; i++) {
        for (j = i + 1; j < len1; j++) {
            if (str1[i] > str1[j]) {
                temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
        }
    }
    for (i = 0; i < len2 - 1; i++) {
        for (j = i + 1; j < len2; j++) {
            if (str2[i] > str2[j]) {
                temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }
    for (i = 0; i < len1; i++) {
        if (str1[i] != str2[i]) {
            printf("The strings are NOT Anagrams.\n");
            return 0;
        }
    }
    printf("The strings are Anagrams.\n");
    return 0;
}
