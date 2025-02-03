#include<stdio.h>
void change(int* i){
    *i*=10;
}
int main ()  
{
    int i=2;
    change(&i);
    printf("The changed value of i is %d",i );
return 0;
}