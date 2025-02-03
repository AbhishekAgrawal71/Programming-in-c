#include<stdio.h>
int address(int *i){
    return i;
}
int main ()  
{ 
    int i =15;
    printf("The address of i is %p\n",&i);
    int p = address(&i);
    printf("The address of variable is %p",p);
return 0;
}