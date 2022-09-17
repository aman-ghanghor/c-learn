#include <stdio.h>
#include <string.h>

void parser(char* string)
{
    int in = 0;
    int index = 0;

    for (int i=0; i < strlen(string); i++)
    {  
        if (string[i] == '<')
        {
            in = 1;  // inside <>
            continue;
        }
        else if (string[i] == '>')
        {
            in = 0;      // outside <>
            continue;
        }
        if (in == 0)      // when not inside <>
        {   
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0' ;

    // remove trailing spaces from beginning 
    while (string[0]==' ')
    {
       for(int i=0; i < strlen(string); i++) {
          string[i] = string[i+1] ;
       }
    }

    // remove trailing spaces from end
    while (string[strlen(string)-1] == ' ')
    {
        string[strlen(string)-1] = '\0';
    }
    
    

}

int main()
{
    char str[] = "<h1>     Hello world            </h1>";

    parser(str);

    printf("~~~%s~~~", str);

    return 0;
}




