/*3.WAP to read a list of integers and store it in a single dimensional array. Write a C program to find the frequency of a particular number in a list of integers.*/
#include<stdio.h>
int main(){
    int a[10000],n=0,i,number,frequency=0;
    char choice;
    do
    {
        printf("Enter number %d: ",n+1);
        scanf("%d",&a[n]);
        n++;
        printf("Do you want to enter another number? (y/n):\n ");
        scanf(" %c", &choice);
    }while(choice == 'y' || choice == 'Y');
    printf("Total numbers entered: %d\n",n);
    printf("Enter the number to find its frequency: ");
    scanf("%d",&number);
    for(i=0;i<n;i++)
    {
        if(a[i]==number)
        {
            frequency++;
        }}
    printf("Frequency of %d: %d\n",number,frequency);
}