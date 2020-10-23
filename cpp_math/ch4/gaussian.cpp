#include <cmath>
#include "uniform.h"

using namespace std;



double randn(){
    double x,y,r;

    do{
        x = unif(-1.,1.);
        y = unif(-1.,1.);
        r = x * x + y * y;
    }while(r >= 1.);

    double mu = sqrt(-2.0 * log(r)/r);

    return mu*x;
}