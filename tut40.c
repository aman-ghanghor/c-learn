#include <stdio.h> 


// STATIC VARIABLES 
/*
  
  LOCAL VARIABLES :- 

    1. Scopes is a region of the program where a defined variable can exist and beyond which
       it cannot be accessed.
    
    2. Variables which are accessed inside a function or a block are called local variable.
 
    3. They can only be accessed by the function they are declared in!

    4. They are inaccessible to the function outside the function they are declared in!


   GLOBAL VARIABLES :-

    1. These are the variable defined outside the main method.

    2. Global variables are accessible throughout the entire program from any function.

    3. If a local and global variable has the same name, the local variable will take preference.


    FORMAL ARGUMENTS 

     1. These variables are treated as local variable within a function.

     2. These variables take precedence over global variables.


     STATIC VARIABLES 

      1. Static variables are variable which have a property of preserving their values even when they go out of scope.

      2. They preserve their value from the previous scope and are not initialised again.

      3. Static variables are initialised to 0 if not initialised explicitly.

      4. In C, static variables can only be initialised using constant literals.

    Syntax:- 

        static data_type name = value ;

    Example:- 

        static int count = 7 ;



*/



void func() {
    static int num = 2 ;
    num += 5 ;
    printf("num = %d\n", num) ;
}



int main()
{

   func() ;    // 5
   func() ;    // 10
   func() ;    // 15
   func() ;    // 22

   return 0;
}
