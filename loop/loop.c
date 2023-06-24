#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){
    
    int answer;

    while (answer != 42) {
        printf("Answer to the Ultimate Question of Life, the Universe, and Everything : ");
        scanf("%d", &answer);

    }

    for (int x = 0; x < 10; x++) {
        printf("the value of x is %d \n", x);
    }
    

    return EXIT_SUCCESS;
}
