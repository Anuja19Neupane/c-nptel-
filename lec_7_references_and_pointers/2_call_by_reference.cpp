#include <iostream>
using namespace std;

void for_parameter_test(int &, int); // function prototype
                                     // int& is reference parameter
                                     // int is value parameter
int main()
{
    int a = 20;
    cout << "a = " << a << ", &a = " << &a << endl << endl;
    for_parameter_test(a,a); // function call
}
void for_parameter_test (int &b , int c) // if u change b, a will change cuz, it is call by reference parameter
                                        // for int c : it is a call by value parameter
{
    cout << " b = " << b << ", &b = " << &b << endl << endl;
    cout << " c = " << c << ", &c = " << &c << endl << endl;
}