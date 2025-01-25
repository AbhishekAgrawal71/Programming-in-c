#include<stdio.h>
int min(int a,int b,int c){
    int d;
    if(a<b && a<c){
        d=a;
    }
    else if (b<c)
    {
        d=b;
    }
    else 
    d=c;
    return d;
}
int main ()  
{
    int e,f,g;
    printf("Enter the first number:");
    scanf("%d",&e);
    printf("Enter the second  number:");
    scanf("%d",&f);
    printf("Enter the third number:");
    scanf("%d",&g);
    int minimum=min(e,f,g);
    printf("The minimum %d ,%d and %d is %d ",e,f,g,minimum);
return 0;
}