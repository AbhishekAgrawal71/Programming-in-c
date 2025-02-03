#include<stdio.h>
float average(int a,int b,int c){
    return (a+b+c)/3;
}
int main ()  
{
    int a=10,b=15,c=20;
   printf("Average of the numbers %d %d %d is %f ",a,b,c,average(a,b,c));
return 0;
}