#include<stdio.h>
int star(int r,int c);
int main(){
    int r,c,n;
    n=star(r,c);
    return 0;
}
int star(int r,int c)
{   
    int n=10;
    for(r=1;r<=n;r++)
    {
        for (c= 1; c <=r; c++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
