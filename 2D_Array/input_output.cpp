#include<iostream>
using namespace std;



int main(){
    int arr[3][3];
    int n=3, m=3;

    // Nested loop for taking input in 2D Array
    cout << "Enter the Array Element " << endl;
    for (int i=0; i<n; i++){ // This represent the no of row
        for(int j=0; j<m; j++){ // This represent the no of column
            cin >> arr[i] [j] ;
        }
    }

    // Nested loop for showing output in 2D Array
    cout << "Array Element " << endl;
    for (int i=0; i<n; i++){ // This represent the no of row
        for(int j=0; j<m; j++){ // This represent the no of column
            cout << arr[i] [j] << " " ;
        }
        cout << endl;
    }

    return 0;

}