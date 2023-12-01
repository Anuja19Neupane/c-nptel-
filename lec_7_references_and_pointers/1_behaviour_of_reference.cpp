#include <iostream>
using namespace std;

int main()
{
    int a = 10, &b = a; // b is reference of a

    // a and b have same memory location
    cout << "a = " << a << " b = " << b << " . "
         << "&a =  " << &a << " , &b = " << &b << endl;

        // change in a appears in change in b
        ++a;
        cout << "a = " << a << " , b = " << b <<  endl;

        // change in b appears in change in a
        ++b;
        cout << "a = " << a << " , b = " << b <<  endl;
}