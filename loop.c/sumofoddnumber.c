#include<stdio.h>
int main ()  
{
   int n ,i,sum = 0,odd ;
   printf("enter the value of n :");
   scanf("%d",&n);
   for (i=1; i<=(n/2) ; i++)
   {
     odd = ((i*2)-1);
    printf("\n%d",odd);
    sum += odd;
   }
   printf("\nthe sum off %d odd natural numbers is :%d",n,sum);
return 0;
}