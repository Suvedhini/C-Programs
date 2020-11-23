#include<stdio.h>
int main(){
    int i=5;
    printf("The address of variable is %u\n",&i);
    printf("The value of variable is %u\n",*(&i));
    return 0;
}
