#include<stdio.h>
int main(){
    int i=5, *j, **k;
    j=&i;
    k=&j;
    printf("The value of i is %d\n",i);
    printf("The value of k is %d\n",**k);
    return 0;
}
