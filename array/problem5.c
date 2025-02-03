#include<stdio.h>
void reverse(int b[],int p)
{
    for (int i=0;i<p;i++)
    {
       for(int j=0;j<(p-i-1);j++)
       {
        int temp=b[j];
        b[j]=b[j+1];
        b[j+1]=temp;
       } 
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