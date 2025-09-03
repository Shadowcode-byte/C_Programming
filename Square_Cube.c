#include <stdio.h>
int main() 
{
int a, b;
printf("Enter first number: ");
scanf("%d", &a);
printf("Enter second number: ");
scanf("%d", &b);
if (a % 2 == 0) 
{
printf("Square of %d = %d\n", a, a * a);
} 
else 
{
printf("Cube of %d = %d\n", a, a * a * a);
}
if (b % 2 == 0) 
{
printf("Square of %d = %d\n", b, b * b);
} 
else 
{
printf("Cube of %d = %d\n", b, b * b * b);
}
return 0;
}
