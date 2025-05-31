#include<iostream> 
using namespace std;

int printSubArray(int *arr, int n){
    for(int st = 0; st< n; st++){
        for(int end = st; end<n; end++ ){
            for(int  i=st; i<=end; i++){
                cout << arr[i];
            }
            cout << ", ";
        }
        cout << endl;
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int);

    cout << printSubArray(arr, n) << endl;

    return 0;
}