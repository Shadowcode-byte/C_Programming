#include<stdio.h>
int main()
{ 
    char ch;
    FILE *fp;
    fp=fopen("empty.txt","r");
    if(fp==NULL)
    { printf("File does not exist"); }
    else
    {
        ch=fgetc(fp);
        if(ch==EOF)
        { printf("File is empty"); }
        else
        { printf("File has text"); }
    }
    fclose(fp);
    return 0;
}
