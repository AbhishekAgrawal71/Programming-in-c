// create an array of size 3x10 containing multiplication tables of the numbers 2,7 and 9 respectively.
#include<stdio.h>
int main ()  
{   int m=0;
    int arr[3][10];
    for (int i=0;i<3;i++){
        printf("Enter the number for which you want to print the table :");
        scanf("%d",&arr[i][m]);
        for(int j=1;j<10;j++){ 
            arr[i][j]=arr[i][m]*(j+1);
        }
    }
    for (int k = 0; k < 3; k++)
    {
        for(int l=0;l<10;l++)
        {
            printf("%d  ",arr[k][l]);
        }
        printf("\n");
    }
    
return 0;
}