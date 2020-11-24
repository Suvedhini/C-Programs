#include<stdio.h>
int Add(int a)
{
    printf("The address of variable a is %u\n",&a);
}
int main(){
    int i=6;
    Add(i);
    printf("The address of i is %u\n",&i);
    return 0;
}
