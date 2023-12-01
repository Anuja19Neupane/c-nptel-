#include <iostream>
#include <cmath>
using namespace std;

#define TWO 2              // TWO is manifest constant
#define PI 4.0 * atan(1.0) // atan means tan inverse so it becomes tan-1(1.0)
                           // PI is manifest constant as macro
                           // TWO and PI looks like variables , but they don't work like variables, 
                           // compilers don't see them

int main()
{
    int r = 2;
    double peri = TWO * PI * r;
    cout << "Perimeter = " << peri << endl;
    return 0;
}