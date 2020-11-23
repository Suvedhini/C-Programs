#include<stdio.h>
int sum(int n);
int main(){
    int n=9,count=0;
    for(int i=0;i<=n;i++)
    {
    printf("%d\n",i);
    }
    printf("Sum is %d\n",sum(n));
    return 0;
}
int sum(int n)
{
    if(n!=0)
    return n+sum(n-1);
}
