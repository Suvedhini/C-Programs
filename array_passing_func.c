#include<stdio.h>
int Arr(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d\n",i+1,*(ptr+i));
    }
    
}
int main(){
    int arr[]={1,3,35,67,5,45,57};
    Arr(arr,7); 
    return 0;
}
