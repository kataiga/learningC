#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    
    const int MAXIMUM_NUMBER_OF_LIFE = 9;
    int numberOfLife = 5;
    double money = 0;
    
    printf("How much money do you have ? \n");
    scanf("%lf", &money);

    printf("You have %d lifes left\nYou can have a maximum of %d \n\n", numberOfLife, MAXIMUM_NUMBER_OF_LIFE);
    printf("And you got %f $\n", money);

    return 0;
}

