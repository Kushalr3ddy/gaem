#include <stdio.h>
#include <stdlib.h>
#include <time.h>
  
// Generates and prints 'count' random
// numbers in range [lower, upper].
//srand(time(0));
int randint(int lower, int upper, int count){
    time_t t = time(NULL);
    srand(t);
    int num;
    for (int i=0; i < count; i++) {
        int num = (rand() %(upper - lower + 1)) + lower;
        //printf("%d ", num);
    }
    return num;
}

/*

// Driver code
int main()
{
    //int lower = 5, upper = 7, count = 1;
  
    // Use current time as 
    // seed for random generator
  
    //printRandoms(lower, upper, count);
  
    return 0;
}

*/