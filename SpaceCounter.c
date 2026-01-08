// wap to count the no of spaces in the file 
#include<stdio.h>
int main()
{
    FILE *fp;       
    char ch;
    int count=0;
    fp=fopen("space.txt","r");
    if(fp==NULL)
    { printf("File does not exist");}       
    else
    {
        while((ch=fgetc(fp))!=EOF)
        {if(ch==' ')
            { count++; }
        }
        printf("Number of spaces=%d",count);
    }
    fclose(fp);
    return 0;
}
