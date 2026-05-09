/*Open an existing file and read its content character by character, and then close the file.*/
#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("myfile2.txt", "r");

    if (fp == NULL) {
        printf("File does not exist!\n");
        return 0;
    }

    printf("File Content:\n");

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}
