#include <stdio.h>
#include <stdlib.h>


int add(int x, int y){
    return x + y;
}


int sub(int x, int y){
    return x - y;
}


int sum(int x, int y){
    return x * y;
}


double divide(int x, int y){
    return x / y;
}


int main(int argc, char *argv[]){
    
    int  nb1 = 0, nb2 = 0, operator = 0;
    double result = 0;

    printf("enter the first number : ");
    scanf("%d", &nb1);
    printf("enter the second number : ");
    scanf("%d", &nb2);

    printf("what operation do you want to do ? \n");
    printf("1 +\n");
    printf("2 -\n");
    printf("3 x\n");
    printf("4 /\n");
    scanf("%d", &operator);

    switch (operator) {
        case 1:
            result = add(nb1, nb2);
            break;
        case 2:
            result = sub(nb1, nb2);
            break;
        case 3:
            result = sum(nb1, nb2);
            break;
        case 4:
            result = divide(nb1, nb2);
            break;
        default:
            printf("operator not supported\n");
            break;
    }

    printf("The result is %f : ", result);

    return EXIT_SUCCESS;
}


