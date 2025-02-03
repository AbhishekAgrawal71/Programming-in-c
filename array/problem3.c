#include<stdio.h>
int main ()  
{  int arr[10];
    int n=5;
   for(int i=0;i<10;i++){
    arr[i]=n*(i+1);
    printf("%d\n",arr[i]);
   }
return 0;
}