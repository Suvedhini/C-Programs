#include<stdio.h>
void morning();  //Function prototype
void aftrn();
void evng();
int main(){
    morning(); //Function call
    printf("Have a great day\n");
    return 0;
}
void morning() //Function definition
{
    printf("Good morning\n");
    aftrn();
}
void aftrn()
{
    printf("Good afternoon\n");
    evng();
}
void evng()
{
    printf("Good evening\n");
}
