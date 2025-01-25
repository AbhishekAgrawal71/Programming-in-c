#include<stdio.h>
int sum(int a , int b ,int c){
    
    return a+b+c;
}
int main ()  
{
    int c,d,e;
    printf("Enter the first number:");
    scanf("%d",&c);
    printf("Enter the second  number:");
    scanf("%d",&d);
    printf("Enter the third number:");
    scanf("%d",&e);
    int add=sum(c,d,e);
    printf("The sum is %d",add);

return 0;
}