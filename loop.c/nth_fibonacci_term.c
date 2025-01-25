#include<stdio.h>
int main ()  
{
    int i,a=0,b=1,sum,n;
    printf("Enter the number :");
    scanf("%d",&n);
    
    for ( i=1 ; i<=n-1 ; i++)
    {
        sum = a+b;
        a=b;
        b=sum; 
    }
    printf("The %dth fibonacci term is %d",n,a);
return 0;
}