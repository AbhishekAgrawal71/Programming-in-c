#include<stdio.h>
int main ()  
{
    int i=15;
    int* j=&i;
    int** k=&j;
    printf("%d",**k);
return 0;
}