#include "gcd.h"
#include <iostream>

using namespace std;


long gcd(long a, long b){
    //make sure both a and b are nonnegative

    if(a < 0)
        a *= -1;
    if(b < 0)
        b *= -1;

    //if a and b are both zero, print an error and return 0

    if(a ==0 && b == 0){
        cerr<<"WARNING gcd called with both arguments equal to zero."<<endl;
        return 0;
    }

    //if a is 0 return b
    if(a == 0)
        return b;

    //if b is 0 return a
    if(b == 0)
        return a;

    long c = a%b;

    return gcd(b,c);
}

