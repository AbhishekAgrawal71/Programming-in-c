#include<stdio.h>
int main ()  
{
    int i,p,s,r,a,b;
    printf("Enter initial no:");
    scanf("%d",&a);
    printf("Enter final digit:");
    scanf("%d",&b);
    for (i=a;i<=b;i++)
    { s=i;
      r=0;
        while(s!=0)
        {
            p=s%10;
            r=r+(p*p*p);
            s=s/10;
        }
        if(i==r)
        {printf("%d ",i);}
    }
return 0;
}