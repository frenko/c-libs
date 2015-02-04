#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "include/RNG.h"

double gaussRNG(double avg, double var) {
    /*
     * gaussRNG take 2 double values: average and variances and return a random gaussian number
     * This Function use a Box-Muller method to generate a random gaussian number
     * from 2 uniform distribuited random numbers
     * @Author: Frenko
     * @email: frenko@paranoici.org
     *  
     *
     */
    
    double x1, x2, w, y;
    do {
        x1 = 2.0 * drand48() - 1.0;
        x2 = 2.0 * drand48() - 1.0;
        w = x1 * x1 + x2 * x2;
    } while ( w >= 1.0 );
    
    w = sqrt( (-2.0 * log( w ) ) / w );
    y = x1 * w*var + avg;
    
    return y;
}
