#include<stdio.h>
int main(){
    int n_stud=2,n_sub=5;
    int marks[2][5];
    for (int i = 0; i < n_stud; i++)
    {
        for (int j = 0; j < n_sub; j++)
        {
            printf("Enter the marks of student %d of Subject %d\n",i+1,j+1);
            scanf("%d",&marks[i][j]);
        }
        
    }
    for (int i = 0; i < n_stud; i++)
    {
        for (int j = 0; j < n_sub; j++)
        {
            printf("The marks of Student %d in Subject %d is %d\n",i+1,j+1,marks[i][j]);
        }
        
    }
    
    
    return 0;
}
