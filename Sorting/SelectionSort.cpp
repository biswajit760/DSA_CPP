#include<iostream>
using namespace std;

int print(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int selectionSort(int *a, int n){
    for(int i=0; i<n-1; i++){
        int minIdx = i;
        //loop for find min
        for(int j=i+1; j<n; j++){
            if(a[j] > a[minIdx]){
                minIdx = j;
            }
        }
        swap(a[i], a[minIdx]);
    }
    print(a, n);
}

int main(){
    int a[5] = {4, 1, 2, 5, 3};
    selectionSort(a, 5);
    return 0;
}