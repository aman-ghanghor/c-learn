#include <stdio.h>


int main() {

    FILE* ptr = NULL ;

    // ======== FPUTC ========
    // ptr = fopen("love.txt", "w") ;
    // int i = fputc('b', ptr) ;
    // printf("%d", i) ;


    // ======== FPUTS ========
    // ptr = fopen("love.txt", "a") ;
    // int i = fputs("Hello", ptr) ;
    // printf("%d", i) ;


    // ======== FGETC ========
    // ptr = fopen("love.txt", "r") ;
    // char myc ;
    // while(ptr!=NULL) {
    //     int a = fgetc(ptr) ;
    //     printf("%c", a);
    //     if(feof(ptr)) {
    //         break;
    //     }
    // }


    // ======== FGETS ========
    // ptr = fopen("love.txt", "r") ;
    // char* mys ;
    // fgets(mys, 4, ptr) ;   //  3 character plus one is null terminated character.
    // printf("%s", mys) ;



    return 0 ;

}