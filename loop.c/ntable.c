#include<stdio.h>
int main(){
    int n ,i ;
    printf("enter the value of n :");
    scanf("%d",&n);
    for(i=0; i<=(10*n); i=i+n)
{
    printf("%d\n",i);
}
    



    return 0;
}