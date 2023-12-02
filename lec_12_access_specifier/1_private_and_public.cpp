#include <iostream>
#include <cmath>
using namespace std;

class Complex
{
private:
    double re, im;

public:
    double norm()
    {
        return sqrt(re * re + im * im);
    }
};
void print(const Complex &t) //It takes a constant reference to a Complex object (t) as a parameter.
{
    cout << t.re << "+j" << t.im << endl; // private ma vako le garda this in inaccessible outside the class.
}
int main ()
{
    Complex c = {4.3, 5.2}; //error
    print (c);
    cout << c.norm();
}