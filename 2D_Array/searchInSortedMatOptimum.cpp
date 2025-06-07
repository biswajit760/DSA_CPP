#include<iostream>
using namespace std;

bool search(int mat[][4], int n, int m, int key){
    int i=0, j =m-1;

    while(i < n && j >= 0){
        if(mat[i][j] == key ){
            cout << "Found at cell (" << i << "," << j << ")\n";
            return true;
        } else if(mat[i][j] > key){
            // have to search in left
            j--;

        } else {
            // have to search in down
            i++;
        }
    }
}

int main(){
    int mat [4][4] = {{1, 2, 3, 4},
                      {5, 6, 7, 8,},
                      {9, 10, 11, 12,},
                      {13, 14, 15, 16},};

    cout << search(mat, 4, 4, 1) ;
    return 0;
}