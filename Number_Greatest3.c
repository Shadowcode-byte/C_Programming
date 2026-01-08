#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b ,&c);
    int i=1;
    while(i<=1){
        int j=1;
        while(j<=1){
            if (a>=b && a>=c)
            printf("Greatest number =%d\n", a);
            else if(b>=a && b>=c)
            printf("Greatest number =%d\n", b);
            else
            printf("Greatest number =%d\n", c);

        j++;
    i++;

        }
    }
    return 0;
}
