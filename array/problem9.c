#include<stdio.h>
int main ()  
{
    int a,b,c;
    printf("Enter the array size for 3-D array :");
    scanf("%d %d %d",&a,&b,&c);
    int arr[a][b][c];
    int *ptr=arr;
    for (int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            for(int k=0;k<c;k++){
                scanf("%d ",&arr[i][j][k]);
            }
        }
    }
        for (int l=0;l<a;l++)
        {
            for(int m=0;m<b;m++)    
            {
                for(int n=0;n<c;n++)
                {
                    printf("%p\n",ptr);
                    ptr++;
                }
            printf("\n");
            }
        printf("\n");
        }
return 0;
}