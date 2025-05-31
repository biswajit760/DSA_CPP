#include<iostream>
using namespace std;

int maxSubarraySum(int *arr, int n){
    int maxSum  = INT8_MIN;
    for(int st=0; st<n; st++){
        for(int end = st; end<n; end++){
            int currSum =0;
            for(int i=st; i<=end; i++){
                currSum += arr[i];
            }
            cout << currSum << ",";
            maxSum = max(maxSum, currSum);
        }

        cout << endl;
    }
    cout << "Max Sub Array Sum = " << maxSum << endl;
}

int main(){
    int arr[6] = {2, -3, 6, -5, 4, 2};

    int n = sizeof(arr)/sizeof(int);

    maxSubarraySum(arr, n);

    return 0; 
}