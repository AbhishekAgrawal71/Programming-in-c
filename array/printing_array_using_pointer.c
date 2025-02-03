#include<stdio.h>
int main ()  
{
    int arr[5];
    int* ptr=&arr[0];
    for (int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<5;j++)
    {
        printf("%d \n",arr[j]);
    }
    for(int k=0;k<5;k++)
    {
        printf("%d\n",*ptr);
        ptr++;
    }

return 0;
}