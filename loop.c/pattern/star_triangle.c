#include<stdio.h>
int main ()  
{
    int i,j,m;
    printf("Enter the value of m");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
return 0;
}