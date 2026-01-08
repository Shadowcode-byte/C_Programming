#include<stdio.h>
int main()
{   FILE *fp; 
    char ch;
    int count=0;    
    fp=fopen("lines.txt","r");
    if(fp==NULL)
    {printf("File does not exist");}
    else
    {
        while((ch=fgetc(fp))!=EOF)
        {
            if(ch=='\n')
            { count++; }
        }
        printf("Number of lines=%d",count+1);
    }
    fclose(fp);
    return 0;
}
