#include <iostream>
using namespace std;

int identify_function(int a = 10) // default value for parameter a
{
    return (a);
}
int main()
{
    int x = 5, y;
    y= identify_function(x); // normal call . actual parameter taken as x= 5
    cout << " y = " << y << endl;

    y= identify_function(); // uses default parameter. actual parameter taken as 10
    cout << " y = " << y << endl;
}