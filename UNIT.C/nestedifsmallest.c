#include<stdio.h>
int main()
{
     int a, b, c;
    printf("enter the three numbers:");
    scanf("%d%d%d", &a, &b, &c);
    if (a<b)
    {
        if (a<c)
        printf("%d is smallest",a);
        else  //  --> (c<a<b)
        printf("%d is smallest",c);

    }
    else// (b<a)
    {
         if (b<c) // c is greater than b
        printf("%d is smallest",b);
         else // --> (c<b)
        printf("%d is smallest ",c);
    }
    return 0;
}