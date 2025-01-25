#include<stdio.h>
int main ()  
{
    int sum=0,n,p;
    printf("Enter the value of n ");
    scanf ("%d",&n);
    while(n!=0)
    {
        p=n%10;
        n=n/10;
        if(p%2==0)
        {sum=sum+p;}
        
    }
    printf("the sum of even digits of the number is %d",sum);
return 0;
}