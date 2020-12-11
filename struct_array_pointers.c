#include<stdio.h>
struct employee
{
    int id;
    char name[20];
    float salary;
};
int main(){
    struct employee e1;
    struct employee *ptr;
    ptr=&e1;
    ptr->id=101;
    strcpy(ptr->name,"Suvedhini");
    ptr->salary=50000;
    printf("Id of e1 is %d\n",e1.id);
    printf("Id of e1 is %s\n",e1.name);
    printf("Id of e1 is %f\n",e1.salary);
    return 0;
}
