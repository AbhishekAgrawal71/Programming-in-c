#include<stdio.h>
int main ()  
{
    int arr[2][3]={{1,2},{2,3}};
    printf("%d",arr[0][0]);
    int brr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("Enter the element of %d row and %d column of array",i+1,j+1);
            scanf("%d",&brr[i][j]);    
        }
    }
    for(int k=0;k<5;k++){
        for(int l=0;l<5;l++){
            printf("The element of %d row and %d column is %d \n",k+1,l+1,brr[k][l]);
        }
    }

    
return 0;
}