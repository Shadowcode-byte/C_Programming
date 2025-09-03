#include <stdio.h>
int main() {
int num, a = 0, b = 1, c;
printf("Enter a number: ");
scanf("%d", &num);
if (num == 0 || num == 1) 
{
printf("%d is a part of Fibonacci series.\n", num);
return 0;
}
c = a + b;
while (c <= num) 
{
if (c == num) 
{
printf("%d is a part of Fibonacci series.\n", num);
return 0;
}
a = b;
b = c;
c = a + b;
}
printf("%d is NOT a part of Fibonacci series.\n", num);
return 0;
}
