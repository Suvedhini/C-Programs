#include<stdio.h>
int fib(int n);
int main(){
    int n=9,f;
    for (int i = 0; i < n; i++)
    {
        f=fib(i);
        printf("%d\t",f);
    }    
    return 0;
}
int fib(int n)
{
    if(n==1 || n==2)
    return 1;
    else
    return (fib(n-1)+fib(n-2));
    
}
