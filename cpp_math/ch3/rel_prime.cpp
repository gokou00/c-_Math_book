#include <iostream>
#include "gcd.h"

using namespace std;

/** 
 * Find the probability that two integers in {1,...,n} are relatively prime. gcd(a,b) == 1
 * 
 */


int main(){
    long n;
    cout <<"Enter m: ";
    cin >> n;


    long count = 0;

    for(long a = 1; a <=n; a++ ){
        for(long b = 1; b<=n;b++){
            if(gcd(a,b) == 1 ){
                count++;
            }
        }
    }


    cout << double(count) / (double(n)  * double(n)) << endl;

    return 0;
}