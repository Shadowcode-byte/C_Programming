/*1.Write a program to create a new file and write text into it.*/
#include <stdio.h>

int main() {
    FILE *fp;
    char text[200];

    fp = fopen("myfile.txt", "w");

    if (fp == NULL) {
        printf("Error creating file!\n");
        return 0;
    }

    printf("Enter text to write into file:\n");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);
    fclose(fp);

    printf("File written successfully.\n");
    
    return 0;
}
