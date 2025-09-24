/*Check if a string is palindrome.*/
#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j, flag = 1;
    
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    while (str[i] != '\0') {
        i++;
    }
    j = i - 1; 
    i = 0;     

    while (i < j) {
        if (str[i] != str[j]) {
            flag = 0;  
            break;
        }
        i++;
        j--;
    }

    if (flag == 1)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
