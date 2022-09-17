#include <stdio.h>
#include <string.h>

// String functions C AND String.h Library
/*

   Important function of <string.h> 

   1. strcat() = concatinate the string.
   2. strlen() = length of string
   3. strrev() = reverse the string
   4. strcpy() = copy one string to other.
   5. strcmp() = compare two given string.

*/



int main() {
    char str1[] = "Rahul" ;
    char str2[] = "Kuldeep" ;
    char str3[54] ;
    
    // printf("%s \n", strcat(str1, str2)) ;
    // printf("%d \n", strlen(str2)) ;
    // printf("%s \n", strrev(str1)) ;
    printf("%i \n", strcmp(str1, str2 )) ;

    // str3 = strcat(str1, str2) ; // incorrect
    strcpy(str3, strcat(str1, str2)) ;      // copy into str3
    printf("%s \n", str3) ;

    return 0;
}