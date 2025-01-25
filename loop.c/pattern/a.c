#include<stdio.h>
int main ()  
{
    int m;
    printf("Enter the value of m ");
    scanf("%d",&m);
    for(int i=1;i<=m;i++)
    {
        for(int j=m-i+1;j>=1;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
return 0;
}