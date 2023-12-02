#include <iostream>
using namespace std;

class X
{
public:
    int m1, m2;
    void f(int k1, int k2)
    {
        m1 = k1;
        this->m2 = k2;
        cout << "Id = " << this << endl; // It prints the memory address of the current object using this
    }
};
int main ()
{
    X a; // An object a of class X is created.
    a.f(2,3);
    cout << "Address = " << &a << endl;
    cout << "a.m1 = " << a.m1 << " a.m2 =  " << a.m2 << endl;
    return 0;
}
// output
/* 
Id = 0x7ffd0644dbd0
Address = 0x7ffd0644dbd0
a.m1 = 2a.m2 =  3
*/