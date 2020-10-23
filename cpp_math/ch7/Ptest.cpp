#include <iostream>
#include <cmath>
#include <algorithm>
#include "PTriple.h"

using namespace std;



/**
 * Find all primative Pythagorean triples (a,b,c) with 0 <= a <= b <= c <= N where N is specified by the user.
 */

int main(){
    PTriple* table; // array to hold the triples
    long N;

    //Ask the user for N

    cout <<"Please enter N (upper bound on triples) --> ";
    cin >> N;

    if(N <= 0) return 0;

    //creating array

    table = new PTriple[N];

    // Populate the array with all possible Ptriples
    long idx = 0; //index into the table
    long rootN = long(sqrt(double(N)));

    for(long m=1; m <= rootN; n++){
        for(long n = 1; n <= rootN;n++){
            PTriple P = PTriple(m,n);
            if(P.getC() <= N){
                table[idx] = P;
                idx++;
            }
        }
    }

    //Sort the table

    sort(table,table+idx);

    //Print out nonduplicate elements of the table

    cout<< table[0] << endl;

    for(int k = 1; k < idx; k++){
        if(table[k] != table[k-1]){
            cout << table[k] << endl;
        }
    }

    // Release memory held by the table

    delete[] table;
    return 0;

}