#include<stdio.h>
int main ()  
{
    int m;
    printf("Enter the value of m ");
    scanf("%d",&m);
    for(int i=1;i<=m;i++)
    {
        for(int i=1;i<=m;i++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
return 0;
}