#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    int start =0;
    int end = s.length()-1;

    bool palin = true;
    while(start<end){
      if(s[start]!=s[end]){
        palin =false;
        break;
      }

      start++;
      end--;
    }

    if(palin){
        cout << "Palindrome";
    }
    else{
        cout << "Not Palindrome";
    }
}