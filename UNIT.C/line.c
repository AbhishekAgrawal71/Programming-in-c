#include<stdio.h>
int main ()
{ int x1,x2,x3,y1,y2,y3;
 float x,y,z;
   printf("Enter the first point :");
   scanf("%d%d",&x1,&y1);
   
   printf("Enter the second point :");
   scanf("%d%d",&x2,&y2);
   
   printf("Enter the third point :");
   scanf("%d%d",&x3,&y3);
   x =(y2-y1)/(x2-x1);
   y =(y3-y2)/(x3-x2);
   z =(y3-y1)/(x3-x1);

   if (x==y && y==z && z==x)
   printf("these points are the coordinates of a straight line");
   else
   printf("these points are  not the coordinates of a straight line");

    return 0;
}