#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {2, 3, 7, 6, 9};
    int max = arr[0];
    int min = arr[0];

    int n = sizeof(arr) / sizeof(int); // This Calculate total no of element in an ARRAY

    for (int i = 0; i < n; i++)
    {
        // Finding max no
        if (arr[i] > max)
        {
            max = arr[i];
        }
        // Finding min no
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Largest Element of ARRAY : " << max << endl;
    cout << "Smallest Element of ARRAY : " << min << endl;

    return 0;
}