// arr==&arr[0]
#include<stdio.h>
void change(int* x){
    *x*=10;
}
int main ()  
{
    int arr[5];
    int* ptr=arr;
    for(int i=0;i<5;i++){
        printf("Enter the first %d element of array :",i+1);
        scanf("%d",&arr[i]);
    }
    for (int j = 0; j < 5; j++)
    {
        printf("the %d element of array if %d\n",j+1,arr[j]);
        printf("The %d element of the array is %d\n",j+1,*ptr);
        ptr++;

    }
    change(arr);
    printf("The changed value of 0th index of array is %d",arr[0]);    
return 0;
}