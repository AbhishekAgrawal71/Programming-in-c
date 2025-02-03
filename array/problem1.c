#include<stdio.h>
int main ()  
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int* ptr=arr;
    printf("%d\n",arr[2]);
    ptr+=2;
    printf("%d",*ptr);

return 0;
}