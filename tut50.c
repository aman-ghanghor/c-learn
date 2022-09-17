// #define Directive in C

#include <stdio.h>
#define PI 3.14 
#define SQUARE(r) r*r                         // define macro


int main() {
   int radius = 5 ;
   float area = PI*SQUARE(5) ;
   
   printf("value of PI: %f\n", area) ;
   
   return 0 ;
}



