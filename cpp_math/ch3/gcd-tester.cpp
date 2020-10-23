#include "gcd.h"
#include <iostream>

using namespace std;

/**
 * A program to test the gcd procedure.
 */ 

long gcd(long,long);

int main(){
    long a,b;

    cout<<"Enter the first number: "<<endl;
    cin >>a;

    cout<<"Enter the second number: "<<endl;
    cin >>b;

    cout<< "The gcd of "<< a << " and "<< b <<" is "<< gcd(a,b) <<endl;

    return 0;
}

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