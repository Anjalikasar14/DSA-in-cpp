#include<bits/stdc++.h>
using namespace std;
int main(){
  string s1,s2;
  cout<<"s:";
  cin>>s1>>s2;
  int n = s1.length();

  if(s1.length()!=s2.length()){
    cout<<"no";
  } 

  string temp = s1+s2;
  if(temp.find(s2)!=string::npos){
    cout<<"yes";
  } else{
    cout<<"no";
  }
}