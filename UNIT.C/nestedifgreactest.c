#include<stdio.h>
int main()
{
     int a, b, c;
    printf("enter the three numbers:");
    scanf("%d%d%d", &a, &b, &c);
    if (a>b) // b is smallest
    {
        if (b>c)
        printf("%d is largest",b);
        else
        printf("%d is smallest",c);

    }
    else// a is smallest
    {
         if (b>c)
        printf("%d is largest",b);
         else
        printf("%d is largest ",c);
    }
    return 0;
}