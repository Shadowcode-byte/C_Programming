/*WAP to count how many time program is executed and display the message at the beginning of the program "This is execution number"*/
#include <stdio.h>
#include <stdlib.h> 
int main() {
    FILE *file;
    int count = 0;

    file = fopen("file1.txt", "r");
    if (file != NULL) {
        fscanf(file, "%d", &count);
        fclose(file);
    }
    count++;
    printf("This is execution number %d\n", count);

    file = fopen("file1.txt", "w");
    if (file != NULL) {
        fprintf(file, "%d", count);
        fclose(file);
    } else {
        printf("Error opening file for writing.\n");
    }

    return 0;
}