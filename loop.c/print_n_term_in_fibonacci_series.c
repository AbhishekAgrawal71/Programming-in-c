#include<stdio.h>
int main ()  
{
    long i,a=0,b=1,sum,n;
    printf("Enter the number :");
    scanf("%d",&n);
    
    for ( i=1 ; i<=n ; i++)
    {
        printf("\nThe %dth fibonacci term is %d",i,a);
        sum = a+b;
        a=b;
        b=sum; 
    }  
return 0;
}