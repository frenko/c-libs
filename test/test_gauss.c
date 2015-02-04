#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "RNG.h"

#define N 10000

int main() {
    
    srand48(time(0));
    int i;
    double s, mu, r;
    s = 1;
    mu = 0;
    for(i=0;i<N;i++) {
        r = gaussRNG(mu,s);
        printf("%d\t%lf\n",i, r);
    }
}
