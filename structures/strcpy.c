#include<stdio.h>
#include<string.h>
int main ()  
{
    char name[50],place[50];
    scanf("%s",name);
    strcpy(place,"i am from india");
    printf("The %s belongs to %s",name,place);
return 0;
}