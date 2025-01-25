#include<stdio.h>
int main ()  
{
    int n,r;
    printf("Enter the value of n :");
    scanf("%d",&n);
    printf("Enter the value of n :");
    scanf("%d",&r);
     int n_factorial=1;
     int r_factorial=1;
     int nr_factorial=1;
    for( int i=2;i<=n;i++ )
    {
        n_factorial=n_factorial*i;
    }
     for( int i=2;i<=r;i++ )
    {
        r_factorial=r_factorial*i;
    }
     for( int i=2;i<=n-r;i++ )
    {
        nr_factorial=nr_factorial*i;
    }
    float comb=n_factorial/(r_factorial*nr_factorial);
    printf("The no of possible combinations are %f ",comb);
return 0;
}