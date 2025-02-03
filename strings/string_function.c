// 1. strlen() this function is used to count the number of characters excluding the null character
// returning us the integral value
// library function #include<string.h>
// 2. strcpy(target,source) this function is used to copy the data of first string to another string passed to it .
// 3. strcat() used to concatinate two string.
//
#include <stdio.h>
#include <string.h>
int main()
{
    char str[10] = "hello";
    printf("%d \n", strlen(str));
    char st[10];
    strcpy(st,str);
    printf("%s %s \n",str,st);
    char s[15];
    strcpy(s,"harry");
    printf("%s\n",s);
    printf("%s",strcat(str,s));
    return 0;
}