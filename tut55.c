#include <stdio.h>

// Making command line utility 


int main(int argc, char const *argv[])
{
    printf("value of argc: %d\n", argc) ;
    // You can use the argument provided in command line and manipulate them according to need.
    for(int i=0; i < argc; i++) {
        printf("at index %d = %s \n", i, argv[i]) ;
    }

    return 0;
}
