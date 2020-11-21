#include<stdio.h>
void morning();  //Function prototype
void aftrn();
void evng();
int main(){
    morning(); //Function call
    aftrn();
    evng();
    printf("Have a great day\n");
    return 0;
}
void morning() //Function definition
{
    printf("Good morning\n");
}
void aftrn()
{
    printf("Good afternoon\n");
}
void evng()
{
    printf("Good evening\n");
}
