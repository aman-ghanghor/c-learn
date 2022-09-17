#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
   char* ptr ;
   int n ;
   
   for (int i=0; i < 3; i++) {
      printf("Employee - %d : \n", i+1) ;
      printf("Enter size of your eid: ") ;
      scanf("%d", &n) ;
      getchar();
      ptr = (char*) malloc((n+1)*sizeof(char)) ;        // n + 1, 1 for '\0' to be valid character string array
      printf("Enter your eid (size %d): ", n) ;
      // enter id
      scanf("%s", ptr) ;
      getchar() ;
      // show eid
      printf("Your eid is: %s \n\n", ptr) ;

      free(ptr) ;
   }

   return 0;

}
