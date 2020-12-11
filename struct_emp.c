#include<stdio.h>
struct employee
{
    int id;
    char name[20];
    float salary;
};

int main(){
    struct employee e1,e2,e3;
    printf("Enter the value of id of e1 :");
    scanf("%d",&e1.id);
    printf("Enter the value of name of e1 :");
    scanf("%s",e1.name);
    printf("Enter the value of salary of e1 :");
    scanf("%f",&e1.salary);

    printf("Enter the value of id of e2 :");
    scanf("%d",&e2.id);
    printf("Enter the value of name of e2 :");
    scanf("%s",e2.name);
    printf("Enter the value of salary of e2 :");
    scanf("%f",&e2.salary);

    printf("Enter the value of id of e3 :");
    scanf("%d",&e3.id);
    printf("Enter the value of name of e3 :");
    scanf("%s",&e3.name);
    printf("Enter the value of salary of e3 :");
    scanf("%f",&e3.salary);

    return 0;
}
