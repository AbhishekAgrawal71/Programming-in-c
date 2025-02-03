// you can not the define the an array for a limit of arguement withour giving the actual arguement.
#include<stdio.h>
int count(int a[],int b){
    int c=0;
    for(int i=0;i<b;i++){
        if(a[i]>0){
            c++;
        }
    }
    return c;
}
int main ()  
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the %d element of array ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("No. of positive integers in the array is : %d",count(arr,n));  
return 0;
}