#include<stdio.h>
int main ()  
{
    int count=0 ,n;
    printf("Enter the number :");
    scanf("%d",&n);
    while(n!=0)
     { 
        n=n/10;
       count++;
    }
     printf("The num of digits in %d is %d",n,count);
     return 0;
return 0;
}