# C-Programs
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int num,nguess=1,guess;
    srand(time(0));
    num=rand()%100+1;
    printf("The number is %d\n",num);
    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if (guess>num)
        {
            printf("Lower number please!\n");
        }
        else if (guess<num)
        {
            printf("Higher number please\n"); 
        }
        else
        {
            printf("You guessed the number in %d guesses",nguess);
        }
        nguess++;
    } while(guess!=num);   
    return 0;
}
