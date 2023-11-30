#include <iostream>
#include <vector>
using namespace std;
#define Max 100

int main()
{

    vector<int> arr(Max); // Declares a vector named arr that can hold integers.
    cout << "Enter the number of elements: ";
    int count, sum = 0;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        arr[i] = i;
        sum += arr[i];
    }
    cout << "The sum of array is: " << sum << endl;
    return 0;
}