#include <iostream>
using namespace std;

void swap(int &a, int &b); // call by reference
int main()
{
    int a = 10, b = 5;
    cout << "before swapping a = " << a << " b = " << b << endl;
    swap(a, b); // natural call
    cout << "after swapping a = " << a << " b = " << b << endl;
}

void swap(int &x, int &y)
{
    int t;
    t = x;
    x = y;
    y = t;
}