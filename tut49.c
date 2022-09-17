// #include Directive in C

#include <stdio.h>
// #include "tut48.c"       // give error as tut48.c has main function and current file also has main function too.
#include "myFile.c"


int main() {
   int a = 5 ;
   
   sayHello() ;
   printf("value of a is: %d \n", a) ;
   
   return 0 ;
}



