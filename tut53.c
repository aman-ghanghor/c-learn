#include <stdio.h>


int main() {
    char str[40] = "I love you darling. Lets's go to mars" ;
    FILE* ptr = NULL ;

    // ========= Reading a file =========
    // ptr = fopen("love.txt", "r");
    // fscanf(ptr, "%s", str);
    // printf("%s", str);

    
    // ========= Writing a file ==========
    // ptr = fopen("love.txt", "w");
    // fprintf(ptr, "%s", str);
    

    // ========= Appending a file ==========
    // ptr = fopen("love.txt", "a");
    // fprintf(ptr, "%s", str);


    // ========= Close file pointer =========
    // fclose(ptr)


    return 0 ;

}