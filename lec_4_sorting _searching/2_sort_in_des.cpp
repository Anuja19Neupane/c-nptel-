// ascending order
#include <iostream>
#include <algorithm> // to use sort function
using namespace std;

int main()
{
    int data[] = {2, 4, 5, 7, 9};
    sort(data, data + 5); // 5 ota data, so data+5

    for (int i = 0; i < 5; i++)
    {
        cout << data[i] << " ";
    }
    return 0;
}