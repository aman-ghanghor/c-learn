#include <stdio.h>

// =========== Array and Pointer Arithmetic =============


int main()
{
   int arr[] = {1, 3, 5, 7, 9} ;

   int *ptr = arr ;

   printf("%d \n", *arr) ;
   printf("%d \n", *(arr + 1) ) ;
   printf("%d \n", &arr[1]) ;

   printf("%i", *(arr + 1)==arr[1]) ;


   return 0 ;
}



