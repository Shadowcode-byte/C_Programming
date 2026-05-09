/*3.Open a file, read its content line by line, and display each line on the console.*/
#include <stdio.h>

int main() {
    FILE *fp;
    char line[200];

    fp = fopen("myfile3.txt", "r");

    if (fp == NULL) {
        printf("Unable to open file!\n");
        return 0;
    }

    printf("Reading file line by line:\n");

    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}
