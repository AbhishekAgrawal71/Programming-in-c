#include<stdio.h>
int main(){
  int i,cd,n;
  printf("enter the common difference between numbers and value of n  :");
  scanf("%d%d",&cd,&n);
  for( i=0 ; i<=(i+(n-1)*cd) ; i=i+cd )
  {printf("%d ",i);}
    return 0;
}