#include<stdio.h>
#include<string.h>
struct emp{
    int id;
    char name[20];
    float salary;
};
int main(){
    struct emp facebook[100];
    facebook[0].id=1;
    strcpy(facebook[0].name,"Suvedhini");
    facebook[0].salary=40000;  

    printf("%d\n",facebook[0].id);
    printf("%s\n",facebook[0].name);
    printf("%f\n",facebook[0].salary);
    return 0;
}
