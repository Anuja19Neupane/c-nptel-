#include <iostream>
#include <cmath>
using namespace std; /* earlier we didn't used this,
                        here we are using so we don't have to use  'std::cout<<' again and again. */

int main()
{
    double x;
    cout << "Input number: " << endl;
    cin >> x;

    double sqrt_x = sqrt(x);
    cout << "Square root of " << x << " is : " << sqrt_x << endl;
}
