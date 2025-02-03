#include<stdio.h>
int main ()  
{
    int arr[4]={1,2,3,4};
    int* brr=arr;
    printf("%d",*(brr+3));
return 0;
}