#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
  int left =0;
  int right = s.length()-1;

  while(left<right){
    while(left<right && !isalnum(s[right])){
      right--;
    }
    while(left<right && !isalnum(s[left])){
      left++;
    }

    if(tolower(s[left]) != tolower(s[right])){
      return false;
    }

    left++;
    right--;
  }

  return true;
}

int main(){
  string s;
  cout<<"s:";
  getline(cin,s);

  if(isPalindrome){
    cout<<"yes";
  } else{
    cout<<"no";
  }
  return 0;

}