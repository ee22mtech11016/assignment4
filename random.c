#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
 {
    int i,j;
    double arrayrandoma[10000],arrayrandomb[10000],arrayrandomc[10000];
    srand((unsigned)time(NULL));            
    for(i = 0; i < 10000; i++) 
    {                
        arrayrandoma[i] = (double)rand() / RAND_MAX;   
        //printf("%f\n", arrayrandoma[i]);                  
    }
    for(i = 0; i < 10000; i++) 
    {                
        arrayrandomb[i] = (double)rand() / RAND_MAX;   
        //printf("%f\n", arrayrandomb[i]);                  
    }
for(i = 0; i < 10000; i++) 
    {                
        arrayrandomc[i] = arrayrandoma[i] + arrayrandomb[i];   
        printf("%f\n", arrayrandomc[i]);                  
    }

    return 0;
}
