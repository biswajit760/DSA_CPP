#include<iostream>
using namespace std;

int search(int mat[][4], int n, int key){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(key == mat[i][j]){
                return 0;
            }
        }
    }
    return -1;
}

int main(){
    int mat [4][4] = {{1, 2, 3, 4},
                      {5, 6, 7, 8,},
                      {9, 10, 11, 12,},
                      {13, 14, 15, 16},};

    cout << search(mat, 4, 15) ;
    return 0;
}