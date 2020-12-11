#include<stdio.h>
struct emp{
    int id;
    char name[20];
    float salary;
};
int main(){
    struct emp suvedhini={100,"Suvedhini",40000};
    printf("Id is %d\n",suvedhini.id);
    printf("Name is %s\n",suvedhini.name);
    printf("Salary is %f\n",suvedhini.salary);
    return 0;
}
