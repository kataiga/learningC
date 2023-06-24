#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int age = 0;

    printf("How old are you ? : ");
    scanf("%d", &age);

    if(age >= 18){
        printf("You can drink some vodka !\n");
    } else {
        printf("Go home kido\n");   
    }

    switch (age) {
        case 4:
            printf("how did you even get there ?");
            break;
        case 16:
            printf("soon you will be able");
            break;
        case 18:
            printf("now you can budy");
            break;
        default:
            printf("wut ?");
            break;
    }

    return EXIT_SUCCESS;
}

