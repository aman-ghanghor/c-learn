#include <stdio.h>


int main()
{
    printf("Current date: %s\n", __DATE__) ;
    printf("Current time: %s\n", __TIME__ ) ;
    printf("Current file: %s\n", __FILE__) ;
    printf("Line No: %d\n", __LINE__) ;
    printf("ANSI: %d\n", __STDC__) ;

    return 0;

}





