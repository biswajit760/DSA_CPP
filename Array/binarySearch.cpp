#include<iostream>
using namespace std;


int binSearch(int *arr, int n, int key){
    int st=0, end = n-1;
    while(st <= end){
        int mid = (st + end) / 2;
        if (arr[mid] == key){ // key is equal to mid
            return mid;
        }
        else if(arr[mid] > key){ // search in 1st half
            end = mid - 1;
        }
        else{                   // search in 2nd half
            st = mid + 1;
        }
    }
}

int main(){
    int arr[] = {1, 3, 4, 7, 10, 12};
    int n = sizeof(arr) / sizeof(int);

    cout << binSearch(arr, n, 4) << endl;

    return 0 ;
}