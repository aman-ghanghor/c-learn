#include <stdio.h>
void printStr(char x[]) ; 


// ============= STRING IN C ========== 
/*

  IS STRING A DATA TYPE IN C ??

  -> No,
  -> We have char, int, float and other data types but no 'string' data type in C.
  -> String is not a supported data type in C but it is very useful concept used to model real world entities like name, city, etc.
  -> We express string using an array of characters terminated by a null character ('\0')

   1. String: array of characters terminated by NULL character.
   2. String in C is created by creating an array of characters.
   3. We need an extra character ('\0' or null character) to tell the compiler that the string ends here.

   ex: ways of creating array in c :- 
     
     1)    char name[] = "Rahul" ;
     2)    char name[] = {'R', 'a', 'h', 'u', 'l', '\0'}

*/


int main()
{
  // EXAMPLE - 1
  /*
  char lastname[] = {'S', 'h', 'a', 'r', 'm', 'a', '\0'} ;
  char firstname[] = "Rahul" ;     // no need to write null character as it included by compilar.        
  char city[5] = "Delhi" ;     // it will create problem because no place for '\0'

  printf("%s \n", firstname) ;
  printf("%s \n", lastname) ;
  printf("%s \n", city) ;

  printf("length of firstname : %d \n", (sizeof(firstname)/sizeof(firstname[0]) - 1) ) ;    // '/0' also there
  printf("character at firstname[3] %c", firstname[3]) ;
  */

  
  // EXAMPLE - 2, USER INPUT 
  char str[30] ;
  gets(str) ;
  // puts(str) ;  
  // printf("You entered : %s \n", str) ;
  printStr(str) ;

}


void printStr(char str[]) { 
     int i = 0 ;
     while (str[i]!='\0')
     {
       printf("%c", str[i]) ;
       i++ ;
     } 
}


