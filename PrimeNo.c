#include <stdio.h>
int main() {
int num, i, Prime = 1;
printf("Enter a number: ");
scanf("%d", &num);
if (num <= 1) {
}
else 
{
i = 2;
while (i < num) 
{
if (num % i == 0) 
{
Prime=0;
break;
}
i++;
}
}
if (Prime) {
printf("%d is a prime number.\n", num);
} 
else 
{
printf("%d is not a prime number.\n", num);
}
return 0;
}
