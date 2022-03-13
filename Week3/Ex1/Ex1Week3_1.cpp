#include <iostream>
#include "Math.h"


using namespace std;

int main()
{
    int r1 = Math::Add(2, 5);
    int r2 = Math::Add(7, 6, 4);
    int r3 = Math::Add(4.4, 33.3);
    int r4 = Math::Add(8.3, 12.6, 10.2);
    int r5 = Math::Mul(13, 33);
    int r6 = Math::Mul(43, 2, 23);
    int r7 = Math::Mul(5.5, 3.5);
    int r8 = Math::Mul(1.4, 2.5, 12.5);
    int r9 = Math::Add(4, 7, 3, 10, 12);
    char* r10 = Math::Add("qwe", "rty");

    cout << "Add(2, 5) = " << r1 << endl;
    cout << "Add(7, 6, 4) = " << r2 << endl;
    cout << "Add(4.4, 33.3) = " << r3 << endl;
    cout << "Add(8.3, 12.6, 10.2) = " << r4 << endl;
    cout << "Mul(13, 33) = " << r5 << endl;
    cout << "Mul(43, 2, 23) = " << r6 << endl;
    cout << "Mul(5.5, 3.5) = " << r7 << endl;
    cout << "Mul(1.4, 2.5, 12.5) = " << r8 << endl;
    cout << "Add(4, 7, 3, 10, 12) = " << r9 << endl;
    cout << "Add(qwe,rty) = " << r10 << endl;
    return 0;
}