#include <stdio.h>
#include <stdlib.h>
#include <time.h>
  
 //istg idk how this shid works 
// generates and prints 'count' random
// numbers in range [lower, upper]
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
