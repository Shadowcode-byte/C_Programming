/*Find the longest word in a sentence.*/
#include <stdio.h>
int main() {
    char str[200];
    int i = 0, len = 0, maxLen = 0, start = 0, maxStart = 0;
    printf("Enter a sentence: ");
    scanf(" %[^\n]s", str);
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            if (len == 0) start = i; 
            len++;
        } else {
            if (len > maxLen) {
                maxLen = len;
                maxStart = start;
            }
            len = 0;
        }
        i++;
    }
    if (len > maxLen) {
        maxLen = len;
        maxStart = start;
    }
    printf("Longest word: ");
    for (i = 0; i < maxLen; i++) {
        printf("%c", str[maxStart + i]);
    }
    printf("\n");
    return 0;
}