#include<stdio.h>
struct student{
    int sapid;
    char name[20];
    float percentage;
};struct student e1;
int main ()  
{
    printf("enter the name");
    scanf("%s",e1.name);
    printf("Enter the sapid :");
    scanf("%d",&e1.sapid);
    printf("Enter the percentage :");
    scanf("%f",&e1.percentage);


return 0;
}
