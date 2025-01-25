#include<stdio.h>
int main ()  
{
    int i,j,k,m;
    printf("Enter the value of m");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        for(j=i;j<=m-1;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
return 0;
}