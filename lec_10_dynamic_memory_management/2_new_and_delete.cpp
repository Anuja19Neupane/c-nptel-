#include <iostream>
using namespace std;

int main()
{
    int *p = new int(5);
    cout << *p << endl; //prints 5
    delete p;
}