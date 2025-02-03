#include<stdio.h>
int main ()  
{
    char he[10]="hello";
    // he[10]="hii";  -> There is no sense of reinitialising a string .
    printf("%s",he);
return 0;
}