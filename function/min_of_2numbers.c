#include<stdio.h>
int min(int a,int b){
    int d=a;
    if(a<b) d=a;
    return d;
    }
int main ()  
{
    int e=7,f=10;
    int minimum=min(e,f);
    printf("the minimun of %d and %d is %d ",e,f,minimum);
return 0;
}