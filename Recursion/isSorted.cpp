#include <iostream>
using namespace std;

/*
  Function: isSorted
  Purpose : Check whether an array is sorted in ascending order using recursion

  Parameters:
  - arr[] : input array
  - n     : size of the array
  - i     : current index being checked

  Returns:
  - true  -> if array is sorted
  - false -> if array is not sorted
*/
bool isSorted(int arr[], int n, int i) {

    // ✅ Base Case:
    // If we reach the last index, it means
    // all previous elements were in correct order
    if (i == n - 1) {
        return true;
    }

    // ❌ If current element is greater than the next one,
    // the array is NOT sorted
    if (arr[i] > arr[i + 1]) {
        return false;
    }

    // 🔁 Recursive Call:
    // Check the remaining part of the array
    // IMPORTANT: return the result of recursion
    return isSorted(arr, n, i + 1);
}

int main() {
    // Sorted array
    int arr1[5] = {1, 2, 3, 4, 5};

    // Unsorted array
    int arr2[5] = {1, 3, 2, 4, 5};

    // Output will be 1 (true)
    cout << isSorted(arr1, 5, 0) << endl;

    // Output will be 0 (false)
    cout << isSorted(arr2, 5, 0);

    return 0;
}
