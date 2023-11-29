#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cout << "Input number : " << endl;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "Sum of " << n << " is " << sum << endl;
}