
#include <iostream>
#include "Macros.h"
using namespace std;

double Calculate(double x, double y, double z)
{
#if Z > 3
    return MAX(SQR(x + y), SQR(x - z));
#else
    return MIN(x * y + y * z, SQR(z * x + y * z));
#endif
}

#ifndef UNIT_TEST
int main()
{
    double x = 2;
    double y = 3;
    double z = Z;

    cout << "w = " << Calculate(x, y, z) << endl;

    return 0;
}
#endif
