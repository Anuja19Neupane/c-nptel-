#include <iostream>
#include <cstdlib> // to use malloc and free
using namespace std;

int main()
{
    int *p = (int *)malloc(sizeof(int));
    *p = 5;

    cout << *p << endl; //prints 5
    free(p);
}