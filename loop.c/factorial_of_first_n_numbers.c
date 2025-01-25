#include<stdio.h>
int main ()  
{
    int i,n,p=1;
    printf("Enter the number");
    scanf("%d",&n);   
    for(i=1;i<=n;i++)
    {
        p=p*i;
        printf("\nfactorial of %d is %d",i,p);
    }
    if(n==0)
       { printf("The factorial of %d is 0",n);}
return 0;
}