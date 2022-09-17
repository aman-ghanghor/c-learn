#include <stdio.h>

// =========== Passing array as parameter in function   =============

// int avg(int x[]) {        // formal parameter as array
//     int sum = 0 ;
//     for (int i = 0; i < 5 ; i++)
//     {
//         sum += x[i] ;
//     }
//     return sum / 5 ;
// }


int avg(int* x) {       //  formal parameter as pointer
    int sum = 0 ;
    for (int i = 0; i < 5 ; i++)
    {
        sum += *(x + i) ;
    }
    return sum / 5 ;
}


int main()
{

   int marks[] = {10, 20, 30, 40, 50} ;
   int marksAvg = avg(marks) ;
   printf("Marks Average: %i", marksAvg) ;
   return 0 ;

}



