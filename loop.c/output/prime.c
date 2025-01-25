#include<stdio.h>
int main ()  
{
    int i , n , a=0;
    printf("Enter the number");
    scanf("%d",&n);
    for ( i=2 ; i<=n/2 ; i++)
       { 
        if (n%i==0)
        a=1;
        break;
       }
       if (n==1)
       printf("The number is neither prome nor consecutive");
       else if ( a==1)
       printf(" The number is consecutive");
       else if ( a==0)
       printf(" The number is prime number");q
return 0;
}