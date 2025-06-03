#include<iostream>
using namespace std;

int print(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int bubbleSort(int *a, int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(a[j] > a[j + 1]){
                swap(a[j], a[j + 1]);
            }
        }
    }
    print(a, n);
}

int main(){
    int a[5] = {4, 1, 2, 5, 3};
    bubbleSort(a, 5);
    return 0;
}