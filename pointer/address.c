#include<stdio.h>
int main ()  
{
    int a=17;
    int* p=(&a);
    printf("%p\n",&p); // Address of pointer variable
    printf("%d\n",*p); // value of a 
    printf("%p\n",&a);   // Address of a 
    printf("%p\n",p);    // address of a
return 0;
}