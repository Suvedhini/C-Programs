#include<stdio.h>
int avg(int a,int b,int c);
int main(){
    int a,b,c;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);
    printf("Enter the value of c\n");
    scanf("%d",&c);
    printf("The average of 3 numbers is %d\n",avg(a,b,c));
    return 0;
}
int avg(int a,int b,int c)
{
    int x;
    x=(a+b+c)/3;
    return x;
}
