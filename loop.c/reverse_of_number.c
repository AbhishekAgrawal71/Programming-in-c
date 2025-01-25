#include<stdio.h>
int main ()  
{
    int reverse=0 , n , p;
    printf("Enter the number is :");
    scanf("%d",&n);
    while(n!=0)
    {
        p=n%10;
        n=n/10;
        reverse=reverse*10;
        reverse=reverse+p;
    }
    printf("The reverse of the number is %d",reverse);
return 0;
}