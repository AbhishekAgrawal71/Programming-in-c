#include<stdio.h>
void printarray(int a[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
    printf("%d ",a[i]);
    }
    a[2]=17;
    printf("\n");
}
int main ()  
{
    int arr[6]={1,2,3,4,5,6};
    printarray(arr,6);
    printf("%d",arr[2]);
    return 0;
}