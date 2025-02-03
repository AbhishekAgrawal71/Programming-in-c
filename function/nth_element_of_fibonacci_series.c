#include<stdio.h>
int fibonacci(int n)
{
if(n==1 || n==2)
{  
return n-1;}
return fibonacci(n-1)+fibonacci(n-2);
}
int main ()  
{int n=3;
    printf("the fibonaaci number of n is %d",fibonacci(n));
return 0;
}