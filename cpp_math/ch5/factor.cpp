#include "factor.h"


long factor(long n, long* flist){
    //If n is zero we return -1;
    if(n==0) return -1;

    //If n is neg, we change it to |n|
    if(n < 0) n = -n;

    //If n is 1 we return 0
    if(n==1) return 0;


    int idx = 0;     //index into the array
    int d = 2;      //current divisor

    while(n>1){
        while(n%d == 0){
            flist[idx] = d;
            idx++;
            n /=d;
        }
        d++;
    }


    return idx;
}