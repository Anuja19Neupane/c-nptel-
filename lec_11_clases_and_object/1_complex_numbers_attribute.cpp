#include <iostream>
using namespace std;

class Complex { public: //class
            // public means: any function that is nota part of class can also use it
double re, im;    //data members
};

int main ()
{
    //obj c declared, initialized
    Complex c = {4.2,5.3};
        cout << c.re << " + " << c.im << "i" << endl; // datamembers is accessed by using dot
}