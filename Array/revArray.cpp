#include <iostream>
using namespace std;

int printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {4, 7, 9, 2, 5};
    int n = sizeof(arr) / sizeof(int);

    int copyArr[n];

    for (int i = 0; i < n; i++)
    {
        int j = n - 1 - i;

        copyArr[i] = arr[j];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = copyArr[i];
    }

    printArray(arr, n);

    return 0;
}