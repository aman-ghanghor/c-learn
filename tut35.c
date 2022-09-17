#include <stdio.h>

int* arrayRev(int x[]) {
    int n = 9 ;
    int i = 0 ;
   
    while(i!=5) {
       int z = x[i] ;
       x[i] = x[n-1-i] ;
       x[n-1-i] = z ;
       ++i ;
    }

    return x ;

}



int main() {
    int arr[] = {1, 2, 3, 4, 8, 9, 10, 23, 40} ;

    for(int i=0; i < 9; i++) {
        printf("%i, ", arr[i]) ;
    }
    printf("\n") ;

 
    int* ptr = arrayRev(arr) ; 

    for(int i=0; i < 9; i++) {
        printf("%i, ", ptr[i]) ;
    }


    return 0;
}