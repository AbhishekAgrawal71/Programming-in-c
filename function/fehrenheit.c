#include<stdio.h>
float temp_converter(float a){
    return (9*a/5)+32;
}
int main ()  
{
    float celcius=35;
    printf("The temprature in fehrenheit is equals to %f ",temp_converter(celcius));

return 0;
}