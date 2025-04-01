#include <stdio.h>
#include <stdlib.h>  // Necesaria para rand() y srand()
#include <time.h>    // Necesaria para time()

#define N 20

int main(){
    
    int i;
    double vt[N];

    srand(time(NULL));

    for(i=0;i<N; i++) {
        vt[i]=1+ rand() % 100;
        printf("%.2f", vt[i]);
        printf("\n");  
    }
    
    return 0;
}
