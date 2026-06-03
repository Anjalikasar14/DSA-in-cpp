#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cout<<"s:";
  cin>>s;

  string ans="";
  int count=1;

  for(int i=0;i<s.length()-1;i++){

    if(s[i]==s[i+1]){
      count++;
    } else {
      ans = ans + s[i];
      ans = ans + to_string(count);
      count=1;
    }
  }
 //for the last char as ham uppar tabhi ans me add kr rhe hai jab
 //different char aaye but last ke badd toh koi difft nhi ayega
 //mtlb wo store krne ke liye alg se likhna pdega
 
  ans = ans + s[s.length()-1];
  ans = ans + to_string(count);


cout<<ans;

return 0;
}