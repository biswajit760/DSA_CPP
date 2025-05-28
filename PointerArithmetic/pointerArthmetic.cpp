#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *aptr =  &a;

    cout << aptr << "\n"; // output = 0x61ff08
    aptr++;
    cout << aptr << "\n"; // output = 0x61ff0c
    aptr--;
    cout << aptr << "\n"; // output = 0x61ff08
    
    return 0;
}