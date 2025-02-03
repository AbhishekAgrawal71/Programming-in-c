#include<stdio.h>
void reverse(int b[],int p)
{
    for (int i=0;i<p/2;i++)
    {
       
        int temp=b[i];
        b[i]=b[p-i-1];
        b[p-i-1]=temp;
       
    }
}
void printarray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }
    printf("\n");
}
int main()
{
    int arr[5]={1,2,3,4,5};
    printarray(arr,5);
    reverse(arr,5);
    printarray(arr,5);
    return 0;
}