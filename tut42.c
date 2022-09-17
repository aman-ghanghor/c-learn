#include <stdio.h>
#include <stdlib.h>

// WHAT & WHY DYNAMIC MEMORY ALLOCATION ?
/*
   1. An statically allocated variable or array has a fixed size in memory.
   2. We have learnt to create big enough array to fit in our inputs but this
      doesn't seems like an optimal way to allocate memory.
   3. Memory is a very useful resource.
   4. Clearly we need a way to request memory on runtime.
   5. Dynamic_Memory_Allocation is a way in which the size of a data structure
      can be changed during the runtime.


      STATIC MEMORY ALLOCATION                          DYNAMIC MEMORY ALLOCATION
                                           |
    Allocation is done before the          |   Allocation is done during the
    program's execution.                   |   program's execution
                                           |
    There is no memory reusability and     |   There is memory reusability and the
    the memory allocated cannot be freed.  |   allocated memory can be freed when not required.
                                           |
    Less efficient                         |   More efficient.


    ========== MEMORY ALLOCATION IN C PROGRAMS =============

    Memory assigned to a program in a typical architecture can be broken down into four segments:

    1. Code  --------------> Text segment
    2. Static/global variables
    3. Stack
    4. Heap


*/

int main()
{
    // USE OF MALLOC 
    /*
    int *ptr;
    int n ;
    printf("Enter how many number you want in array: \n") ;
    scanf("%d", &n) ;
    printf("Enter values \n") ;

    ptr = (int*) malloc(n*sizeof(int));
   
    for (int i = 0; i < n; i++)
    {
       scanf("%d", &ptr[i]) ;   // (ptr + i)
    }
    
    printf("\nITEMS IN ARRAY ARE :\n") ;

    for (int i = 0; i < n; i++)
    {    
       printf("index %d : %d \n", i, ptr[i]) ;      // *(ptr + i)    
    }
    */



    // USE OF CALLOC 
    int *ptr;
    int n ;
    printf("Enter size of array: \n") ;
    scanf("%d", &n) ;
    printf("Enter values \n") ;

    ptr = (int*) calloc(n, sizeof(int));
   
    for (int i = 0; i < n; i++)
    {
       scanf("%d", &ptr[i]) ;   // (ptr + i)
    }
    
    printf("\nITEMS IN ARRAY ARE :\n") ;

    for (int i = 0; i < n; i++)
    {    
       printf("index %d : %d \n", i, ptr[i]) ;      // *(ptr + i)    
    }



    // USE OF REALLOC
    printf("\nEnter size of new array: \n") ;
    scanf("%d", &n) ;
    printf("Enter values \n") ;

    ptr = (int*) realloc(ptr, n*sizeof(int));
   
    for (int i = 0; i < n; i++)
    {
       scanf("%d", &ptr[i]) ;   // (ptr + i)
    }
    
    printf("\nITEMS IN NEW ARRAY ARE :\n") ;

    for (int i = 0; i < n; i++)
    {    
       printf("index %d : %d \n", i, ptr[i]) ;      // *(ptr + i)    
    }



    // USE OF FREE 
    free(ptr) ;


    return 0;

}

