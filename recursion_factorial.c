#include<stdio.h>
int fact(int y);
int main(){
    int a;
    printf("Enter the factorial\n");
    scanf("%d",&a);
    printf("The value of %d is %d",a,fact(a));
    return 0;
}
int fact(int y)
{
    if (y==0 || y==1)
    {
        return 1;
    }
    else
    {
        return y*fact(y-1);
    }
    
}
