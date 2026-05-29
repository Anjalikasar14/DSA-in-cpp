#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;//stops at space
  cout<<s;

  string s2;
  getline(cin,s2);//whole line
  cout<<s2;
  int count =0;

  for(int i=0;s[i] != '\0';i++){
    count++;
  }

  cout<<count;
}