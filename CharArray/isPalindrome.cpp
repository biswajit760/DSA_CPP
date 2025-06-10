#include<iostream>
#include<cstring> 
using namespace std;

bool isPallindrome(char word[], int n){
    int st=0, end=n-1;
    while(st < end){
        if(word[st] != word[end]){
            cout<<"Not Pallindrome";
            return false;

        }

        return true;
    }
}

int main(){
    char word[] = "ABBA";
    cout << isPallindrome( word, strlen(word));

    return 0;
}