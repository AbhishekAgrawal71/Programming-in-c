#include<stdio.h>
int main ()  
{
    int i,n,p=0,r=1;
    printf("Enter the number");
    scanf("%d",&n);
    for (i=0;r<n;i=r)
    {
        p=p+i;
        r=r+p;
        printf("%d %d ",p,r);
    }
return 0;
}