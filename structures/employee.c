#include<stdio.h>
#include<string.h>
struct employee_record{
    int salary;
    char employee_name[50];
    float age;
    char work[40];
} data;
int main ()  
{
    printf("Enter the age :");
    scanf("%f",&data.age);
    printf("%f",data.age);
    
return 0;
}