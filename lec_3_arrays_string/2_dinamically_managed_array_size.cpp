#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Enter the no. of elements: " << endl;
    int count, sum = 0;
    cin >> count;

    vector<int> arr; // Declares a vector named arr that can hold integers.
    arr.resize(count);
    for (int i = 0; i <= arr.size(); i++)
    {
        arr[i] = i;
        sum += arr[i];
    }
    cout << "The sum of array is: " << sum << endl;
    return 0;
}