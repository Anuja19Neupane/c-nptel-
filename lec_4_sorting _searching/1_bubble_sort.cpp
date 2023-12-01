#include <iostream>
using namespace std;

int main()
{
    int data[] = {2, 4, 56, 76, 34};
    int i, step, n = 5, temp;
    for (step = 0; step < n - 1; ++step)
    {
        for (i = 0; i < n - step - 1; ++i)
        {
            if (data[i] > data[i + 1])
            {
                temp = data[i];
                data[i] = data[i + 1];
                data[i + 1] = temp;
            }
        }
    }
    for (i = 0; i < n; ++i)
    {
        printf("Sorted data: %d ", data[i]);
    }
}