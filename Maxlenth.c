#include<stdio.h>
int main()
{   FILE *fp;
    char ch,word[50],maxword[50];
    int len=0,maxlen=0,i;
    fp=fopen("maxlenth.txt","r");
    if(fp==NULL)
    { printf("File does not exist"); }
    else
    {
        while((ch=fgetc(fp))!=EOF)
        {  if(ch!=' ' && ch!='\n')
            { word[len]=ch;
              len++;
            }
            else
            { word[len]='\0';
                if(len>maxlen)
                {  maxlen=len;
                    for(i=0;i<len;i++)
                    { maxword[i]=word[i]; }
                    maxword[i]='\0';
                }
                len=0;
            }
        }
        if(len>maxlen)
        { maxlen=len;
            for(i=0;i<len;i++)
            { maxword[i]=word[i]; }
            maxword[i]='\0';
        }
        printf("Longest word: %s\n",maxword);
    }
    fclose(fp);
    return 0;
}
