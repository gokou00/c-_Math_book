#include "PTriple.h"
#include <set>

int main(){
    set<PTriple> S;

    //ask the user for N

    cout<<"Please enter N (upper bound on triples) --> ";
    long N;
    cin >> N;
    if(N== 0) return 0;

    long rootN = long(sqrt(double(N)));


    for(int k =1; k <= rootN;k++){
        for(int j= 1; j<=rootN;j++){
            PTriple P(j,k);
            if(P.getC() <= N) S.insert(P);
        }
    }

    //Print out the elements of the set

    set<PTriple>::iterator si;  //Iterator for S

    for(si = S.begin(); si != S.end(); si++){
        cout << *si << endl;
    }
    return 0;
}