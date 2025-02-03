#include<stdio.h>
int sum(int n){
    if (n==1){
        return n;
    }
    return sum(n-1)+n;
}
int main ()  
{
    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);
    printf("Enter the value of n %d \n",sum(n));
return 0;
}