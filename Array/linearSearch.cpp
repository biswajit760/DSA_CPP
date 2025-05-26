#include <iostream>
using namespace std;

int linearSearch(int *arr, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {4, 2, 7, 9, 5};
    int n = sizeof(arr) / sizeof(int);
    cout << linearSearch(arr, n, 15) << endl;
    return 0;
}