#include <stdio.h> 


// call by value and call by reference


void doubleNum(int *x) ;

int main() {
    int num = 5 ;
    printf("pointer of num: %i \n", &num) ;
    printf("value of num: %i \n", num) ;

    doubleNum(&num) ;

    printf("value of num after function call: %i \n", num) ;

    return 0 ;
}

void doubleNum(int *a) {
    *a = *a + *a ;
    printf("value of a in function: %i \n", a) ;
}