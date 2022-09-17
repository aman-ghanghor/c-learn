#include <stdio.h>

// NULL POINTER 

int main() {
   int x = 9 ;
   int* p = NULL ;
   p = &x ;

   if(p!=NULL) {
      printf("%d \n", *p) ;
   }
   else {
      printf("Pointer is NULL Pointer and can not be dereferenced") ;
   }
   

   return 0 ;
}



