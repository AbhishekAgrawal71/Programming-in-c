#include<stdio.h>
int main ()  
{
    int a=13;
    int* j=&a;
    printf("The address of the variable is %p\n",j);
    printf("The value at address is %d",*j);
return 0;
}