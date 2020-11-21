#include<stdio.h>
float cel(float x);
int main()
{
    float s;
    s=cel(37);
    printf("Celsius to Fahrenheit is %f",s);
    return s;
}
float cel(float x)
{
    float result;
    result=(x * 9/5)+32;
    return result;
}
