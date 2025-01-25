#include<stdio.h>
float factorial(int n){
    int fact=1;
    for (int i = 2 ; i <= n ; i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main ()  
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    printf("the factorial of %d is %f ",n,factorial(n));
return 0;
}