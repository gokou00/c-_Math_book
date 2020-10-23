#include <iostream>
#include <complex>
#include "complexx.h"

using namespace std;

//program showing how to use complex numbers

//typedef complex<double> C;

int main(){
    C x(3,4);
    C z;
    z = C(2,7);
    //C i(0,1);

    cout << "z = "<< z <<endl;
    cout << "x = " << x <<endl;
    cout <<"z + x = "<< z+x<<endl;
    cout <<"z * x = "<< z*x<<endl;
    cout <<"z / x  =" << z/x <<endl;


    z = 5. - 4. *i;

    cout << "Now z = " << z <<endl;

    cout <<"The real part of z is " << z.real()
         <<" and the imaginary part is " << z.imag() << endl;

    return 0;

    



}