#include<stdio.h>
#include<string.h>
struct emp{
    int id;
    char name[20];
    float salary;
};
int main(){
    struct emp e1;
    e1.id=15;
    strcpy(e1.name,"Suvedhini");
    e1.salary=50000;
    printf("%d\n",e1.id);
    printf("%s\n",e1.name);
    printf("%f\n",e1.salary);
    return 0;
}
