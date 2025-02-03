#include<stdio.h>
int main ()  
{
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<(4-i);j++)
        {
            int temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
        }
    }
    for(int k=0;k<5;k++){
        printf("%d\n",arr[k]);
    }
    
return 0;
}