#include <stdio.h>

// UNIONS IN C 
/*
  1. Union is a user defined data type (very similiar to structures)
  2. The difference between structures and unions lies in the fact that in structure, 
     each member has it own storage location, whereas members of a union uses a single shared memory location.
  3. This single shared memory location is equal to the size of of its largest data member.



  ** DECLARING AND ACCESSING UNION MEMBERS
  
  1. Like structures, we access any member by using the member access operator(.) in unions.
  2. We use keyword union to define a union.
  3. Syntax is very similar to that of structure.


  ** UNION CANNOT HANDLE ALL MEMBERS AT ONCE 

  ** UNIONS ARE USED FOR BETTER MEMORY MANAGEMENT

  ** ex- 

     union Student {
        int id ;
        char name[30] ;
     } s1, s1 ;

     or 

     union Student {
       int id ;
       char name[30] ;
     }
     union Student s1, s1 ;


*/


int main() {
    union Test {
      int a ;        // 4 bytes
      float b ;    // 4 bytes
      char c ;     // 1 bytes 
    } ;

    union Test un ;

    un.a = 5 ;
    un.b = 13.75 ;
    un.c = 'H' ;

    printf("%d \n", un.a) ;
    printf("%f \n", un.b) ;
    printf("%c \n", un.c) ;

    // NOTE - un.a and un.b members of union got corrupted because final value assigned to the variable has occupied the 
    //        the memory location, this is why value of un.c is printed very well.

    printf("Memory taken by test(un) union: %d", sizeof(un) ) ;


    return 0; 
}





