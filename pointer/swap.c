#include<stdio.h>
int swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
    return 0;
}
int main ()  
{
    int a=2,b=12;
    swap(&a,&b);
    printf("The value of a and b is %d %d",a,b);
return 0;
}