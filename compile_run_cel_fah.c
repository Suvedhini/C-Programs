#include<stdio.h>
float celsius(float x);
int main(){
    float x;
    printf("Enter the celsius\n");
    scanf("%f",&x);
    printf("Celsius to fahrenheit is %f\n",celsius(x));
}
float celsius(float x)
{
    int result;
    result=(x * 9/5)+32;
    return result;
}
