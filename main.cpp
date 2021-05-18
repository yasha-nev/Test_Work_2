#include <iostream>
#include "complexnumber.h"
using namespace std;

int main()
{
    ComplexNumber<float> z1;
    ComplexNumber<float> z2;

    cout << "z1 = a1 + i(b2)" << endl;
    cin >> z1;
    cout << z1 << "\n" << endl;

    cout << "z2 = a2 + i(b2)" << endl;
    cin >> z2;
    cout << z2 << "\n" << endl;

    cout << "z1 + z2 = " <<  z1 + z2 << endl;
    cout << "z1 - z2 = " << z1 - z2 << endl;
    return 0;
}
