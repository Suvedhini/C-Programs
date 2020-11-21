#include<stdio.h>
float force(float mass);
int main(){
    float s;
    printf("Enter the mass in kgs\n");
    scanf("%f",&s);
    printf("The value of force in Newton is %f\n",force(s));
    return 0;
}
float force(float mass)
{
    int result;
    result =mass * 9.8;
    return result;
}
