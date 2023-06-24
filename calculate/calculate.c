#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]){

    int result = 0, nb1 = 0, nb2 = 0;
    
    printf("enter the first number : ");
    scanf("%d", &nb1);
    printf("enter the second number : ");
    scanf("%d", &nb2);


    result = nb1 + nb2;

    printf("%d + %d = %d\n", nb1, nb2, result);

    return 0;
}
