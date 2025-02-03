#include<stdio.h>
int fibonacci(int n)
{
if(n==1 || n==2)
{  
return n-1;}
return fibonacci(n-1)+fibonacci(n-2);
}
int main ()  
{int n;
printf("Enter the value of n :");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
    printf("%d. %d \n",i,fibonacci(i));
}

return 0;
}