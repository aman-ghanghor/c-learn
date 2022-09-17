#include <stdio.h>

// VOID POINTER 

int main() {

   int a = 5 ;
   float b = 12.73 ;
   void* ptr ;

   ptr = &a ;
   //  printf("Value of a %d", *ptr)   // cannot dereference void pointer
   printf("Value of a: %d \n", *((int*) ptr) );   // typecast void pointer to int pointer
   ptr = &b ;
   printf("Value of b: %f \n", *((float*) ptr) );    // typecase void pointer to float pointer

   

   return 0 ;
}



