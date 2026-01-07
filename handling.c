/*wap to create a file in wb mode using file handling and write a b c d e use for loop*/
#include <stdio.h>
int main() {
    FILE *fp;
    fp = fopen("example.txt", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (char ch = 'a'; ch <= 'e'; ch++) {
        fwrite(&ch, sizeof(char), 1, fp);
    }

    fclose(fp);
    printf("Data written to file successfully.\n");
    return 0;
}