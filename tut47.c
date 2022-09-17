#include <stdio.h>
#include <stdlib.h>

// DANGLING POINTER 

// int* myFunc() {
//    int a = 5 ;
//    return &a ;
// }



int main() {

   // DEALLOCATION OF MEMORY
   /*
   int* ptr = (int*) malloc(sizeof(int)) ;
   free(ptr) ;  // ptr is no dangling pointer.
   ptr = NULL ;  // ptr is no longer dangling pointer.
   */


  // RETURNING LOCAL VARIABLES IN FUNCTION CALLS
  /*
  int* ptr = myFunc() ;
  */

  
  // VARIABLE GOING OUT OF SCOPE
  int* ptr ;
  {
     int a = 5 ;
     ptr = &a ;
  }
  printf("%d", *ptr) ;

 
   return 0 ;
}



