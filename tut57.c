#include <stdio.h>

// FUNCTION POINTER

int sum(int a, int b) {
    return (a+b) ;
}

void func(int (*ptr)(int, int)) {
    printf("Hello world \n") ;
    printf("SUM IS: %d", ptr(10, 25)) ;
}


int main() {
    int (*ptr)(int, int) ;
    ptr = &sum ;

    func(ptr) ;

    return 0 ;
}


