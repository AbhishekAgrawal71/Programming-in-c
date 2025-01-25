#include<stdio.h>
int main ()  
{
    int i,n,p=1,j;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        p=p*i;

    }
    if(n==0)
       { printf("The factorial of %d is 0",n);}
   
    printf("The factorial of the number is %d",p);
return 0;
}