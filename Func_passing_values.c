#include<stdio.h>
int sum(int a,int b);
int main(){
    int s;
    s= sum(2,5);
    printf("The sum is %d\n",s);
    return 0;
}
int sum(int a,int b)
{
    int result;
    result=a+b;
    return result;
}
