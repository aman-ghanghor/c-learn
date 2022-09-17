#include <stdio.h> 
#include <string.h>


int main()
{
    int n = 3 ;

    struct Driver {
        char name[40] ;
        int driving_license ;
        char route[40] ;
        float kms;
    } ;

    // for(int i=0 ; i < 3; i++) {
        struct Driver d ;

        printf("Name: \n") ;
        gets(d.name) ;

        printf("Driving License: \n") ;
        scanf("%d", d.driving_license) ;

        printf("Route: \n") ;
        gets(d.route) ;

        printf("Kms: \n") ;
        scanf("%f", d.kms) ;

        printf("\n %")
        

    // }
    return 0;
    
}
