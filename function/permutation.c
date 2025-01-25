#include<stdio.h>
int permutation(int n)
{
    int per=1;
    for(int i=2;i<=n;i++){
        per=per*i;
    }
    return per;
}
int main ()  
{
    int n,r;
    printf("Enter the value os n :");
    scanf("%d",&n);
    printf("Enter the value of r");
    scanf("%d",&r);
    float perm=permutation(n)/permutation(n-r);
    printf("The total no of possible arrangement are %f",perm);

return 0;
}