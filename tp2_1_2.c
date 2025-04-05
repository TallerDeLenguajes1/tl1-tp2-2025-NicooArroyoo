#include <stdio.h>
#include <stdlib.h>  // Necesaria para rand() y srand()
#include <time.h>    // Necesaria para time()

#define N 20

int main(){
    
    int i;
    double vt[N];
    double *p = vt;

    srand(time(NULL));

    for(i=0;i<N; i++) {
        *p=1+ rand() % 100;
        printf("%.2f", *p);
        printf("\n");
        p++;
    }
    
    return 0;
}
 