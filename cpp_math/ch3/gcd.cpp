#include "gcd.h"
#include <iostream>

using namespace std;

long gcd(long a, long b){
    //if a and b are both zero, print an error and return 0

    if(a ==0 && b == 0){
        cerr<<"WARNING gcd called with both arguments equal to zero."<<endl;
        return 0;
    }

    if(a < 0){
        a *=-1;
    }
    if(b < 0){
        b *= -1;
    }

    //if a is zero, the answer is b

    if(a == 0)
        return b;

    // otherwise, we check all possiblities from 1 to a

    long d; // d will hold the answer

    for(long t= 1; t <=a;t++){
        if(a%t==0  && b%t==0){
            d = t;
        }
    }



    return d;
}

long gcd(long a, long b, long& x, long& y){
    long d; //place to hold final gcd

    //in case b = 0, we have d = |a|, x = 1 or -1, y arbitrary (say,0)

    if(b == 0){
        if(a<0){
            d = -a;
            x = -1;
            y = 0;
        }else{
            d = a;
            x = 1;
            y = 0;
        }

        return d;
    }

    // if b is negative, here is a workaround

    if(b<0){
        d = gcd(a,-b,x,y);
        y = -y;
        return d;
    }


    //if a is negative, here is a workaround

    if(a < 0){
        d = gcd(-a,b,x,y);
        x = -x;
        return d;
    }


    //set up recursion

    long aa = b;
    long bb = a%b;
    long qq = a/b;
    long xx,yy;


    d = gcd(aa,bb,xx,yy);
    x = yy;
    y = xx - qq*yy;

    return d;
}


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