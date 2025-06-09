#include<iostream>
#include<cstring> 
using namespace std;

int main(){
    char sentence[20];
    cin.getline(sentence, 20); 

    cout << "Your sentence : " << sentence << endl;
    cout << "length : " << strlen(sentence) << endl;

    return 0;
}