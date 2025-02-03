// we can reinitialise a string using pointer.
#include<stdio.h>
int main ()  
{  
    char he[]="hello";
    char *ptr=he;
    // char *ptr="hello"  
    printf("%s\n",ptr);
    ptr="hii";
    printf("%s",ptr); 
    return 0;
}