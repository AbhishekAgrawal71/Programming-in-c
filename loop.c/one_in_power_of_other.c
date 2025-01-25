#include<stdio.h>
int main ()  
{
    int a,b,p=1,i;
    printf("Enter the value of a :");
    scanf("%d",&a);
    printf("Enter the value of b :");
    scanf("%d",&b);
    for (i=1;i<=b;i++)
    {
        p=p*a;
    }
    printf("The value of %d to the power of %d is :%d",a,b,p);
return 0;
}