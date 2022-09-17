#include <stdio.h>
#include <stdlib.h>           // to use, memory allocation
#include <string.h>
#include <time.h>


// Rock, Paper, Scissors GAME in c


int generateRandomNumber(int n) {
    srand(time(NULL));    // srand take seed as input and is defined inside stdlib.h
    // return random number between 0 to n
    return rand()%n ;   
}


int main() {
    printf("The number between 0 and 100 is %d\n", generateRandomNumber(100) ) ;

    return 0;
}





