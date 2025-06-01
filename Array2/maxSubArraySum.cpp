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

// Optimal Solution

int maxSubarraySum2(int *arr, int n){
    int maxSum  = INT8_MIN;
    for(int st=0; st<n; st++){
        int currSum =0;
        for(int end = st; end<n; end++){
            
            currSum += arr[end];
            maxSum = max(maxSum, currSum);
        }

        cout << endl;
    }
    cout << "Max Sub Array Sum = " << maxSum << endl;
}

// Kadanes Algorithm
void maxSubarraySum3(int *arr, int n){
    int maxSum  = INT8_MIN;
    int currSum = 0;
    for(int i =0; i< n; i++){
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if(currSum < 0){ // -ve value
            currSum = 0;
        }
    }
     cout << "Max Sub Array Sum by Kadanes Algorithm = " << maxSum << endl;
}
int main(){
    int arr[6] = {2, -3, 6, -5, 4, 2};

    int n = sizeof(arr)/sizeof(int);

    maxSubarraySum3(arr, n);

    return 0; 
}