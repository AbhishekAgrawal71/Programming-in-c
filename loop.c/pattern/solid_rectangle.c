#include<stdio.h>
int main ()  
{
    int j,i,n,m;
    printf("Enter the number of rows");
    scanf("%d",&m);
    printf("Enter the number of columns");
    scanf("%d",&n);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
return 0;
}