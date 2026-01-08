#include<stdio.h>
int main() 
{   FILE *fp;
    char ch;
    int words=0,chars=0;
    fp=fopen("count_word.txt","r");
    if(fp==NULL)
    { printf("File does not exist"); }
    else
    { while((ch=fgetc(fp))!=EOF)
        { chars++;
            if(ch==' ' || ch=='\n')
            { words++; }
        }
        if(chars>0)
        { words++; }
        printf("Number of characters: %d\n",chars);
        printf("Number of words: %d\n",words);
    }
    fclose(fp);
    return 0;
}