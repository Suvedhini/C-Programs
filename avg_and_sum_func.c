#include<stdio.h>
int SumandAvg(int a,int b, int *sum, float *avg)
{
    *sum=a+b;
    *avg= *sum/2;
}
int main(){
    int a,b,sum;
    float avg;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);
    SumandAvg(a,b, &sum, &avg);
    printf("The value of sum is %d\n",sum);
    printf("The value of avg is %f\n",avg);
   

    return 0;
}
