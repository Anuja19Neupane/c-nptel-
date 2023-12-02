#include <iostream>
#include <cstdlib> 
using namespace std;

int main()
{
    int *p = (int *)operator new(sizeof(int));
    *p = 5;

    cout << *p << endl; //prints 5
    operator delete(p);
}