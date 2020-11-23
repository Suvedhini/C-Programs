#include<stdio.h>
int sum(int a,int b);
int main(){
    int a,b;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n",b);
    scanf("%d",&b);
    printf("Sum of %d + %d is %d\n",a,b,sum(a,b));
    return 0;
}
int sum(int a,int b)
{
    return a+b;
}
