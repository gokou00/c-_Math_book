#include "gcd.h"
#include <iostream>

using namespace std;


long gcd2(long a, long b){
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

    long new_a, new_b;

    /**
     * We use the fact that gcd(a,b) == gcd(b,c) where c = a%b.
     * Note that if b is zero, gcd(a,b) = gcd(a,0) = a. If a is zero,
     * and b is not, we get a%b equal to zero, so new_b will be zero,
     * hence b will be zero and the loop will exit with a == 0, which
     * is what we want.
     */

    while(b != 0){
        new_a = b;
        new_b = a % b;

        a = new_a;
        b = new_b;
    }


    return a;

}
