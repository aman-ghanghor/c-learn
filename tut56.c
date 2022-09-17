#include <stdio.h>

// FUNCTION POINTER

int sum(int a, int b) {
    return (a+b) ;
}

int main() {
    // printf("SUM : %d", sum(5, 2)) ;
    int (*fun_ptr)(int, int) ;
    fun_ptr = &sum ; 
    int d = (*fun_ptr)(4, 7) ;

    printf("Value of d is: %d", d) ;
    
    return 0;

}


