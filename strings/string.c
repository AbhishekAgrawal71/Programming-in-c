// printing string as an array
#include<stdio.h>
int main ()  
{
    char st[]={'a','b','c','d','e','\0'}; // equals to char st[]="abcde";
    
    printf("%s",st);    /*for(int i=0;i<5;i++){
    // same as          printf("%c",st[i]);
                        }*/
return 0;
}