#include <stdio.h> 
#include <string.h>

// Structures in C
/*
   ===> Structures are user defined data type ;

   -> We can either declare a structure along with structure definition or separately:

   ex - 

        struct Student {
            int id;
            char name[40];
            float marks;
        };
        struct Employee s1, s2 ;

    or 
    ex - 
       
       struct Student {
            int id;
            char name[40];
            float marks;
       } s1, s2 ;


    -> Assigning values to struct variables 

    ex- 

       struct Student s1 ;
       s1.id = 1 ;
       s1.name = "rahul" ;
       s1.marks = 52.73 ;

       struct Student s2 = {2, "meera", 70.24}


    NOTE - 

    * Accessing member(element) of structure using . (structure member operator)


*/


int main() {
    struct Student {
        int id ;
        char name[40];
        float marks;
    };
    
    // declare structure variables
    struct Student stu1, stu2, stu3 ;

    stu1.id = 1 ;
    strcpy(stu1.name, "Rahul Sharma") ;
    stu1.marks = 23.53 ;

    // display stu1 
    printf("%i %s %f \n", stu1.id, stu1.name, stu1.marks) ;
    
    // create stu2 directly giving array of member in order 
    stu2 = {2, "Meera", 60.74} ;
    // display stu2
    printf("%i %s %f \n", stu2.id, stu2.name, stu2.marks) ;

    // copy structure 
    stu3 = stu1 ;
    // modify memeber of structure
    stu3.id = 3;
    // display stu3 
    printf("%i %s %f \n", stu3.id, stu3.name, stu3.marks) ;


    return 0;
}






