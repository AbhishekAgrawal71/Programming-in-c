#include<stdio.h>
int  factorial(int n){
    int fact=1;
    for (int i = 2 ; i <= n ; i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main ()  
{
    int n,r;
    printf("Enter the value of n :");
    scanf("%d",&n);
    printf("Enter the value of r :");
    scanf("%d",&r);
    float comb=factorial(n)/(factorial(r)*factorial(n-r));
    printf("the no of possible combinations are %f ",comb);
return 0;
}