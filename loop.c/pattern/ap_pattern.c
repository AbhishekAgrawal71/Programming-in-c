#include<stdio.h>
int main ()  
{
    int m ;
    printf("Enter the value of m ");
    scanf("%d",&m);
    for(int i=1;i<=m;i++)
    {
        int a=1;
        for(int j=1;j<=i;j++)
        {
            

            printf("%d",a);
            a=a+2;
            
        }
        printf("\n");
    }
return 0;
}