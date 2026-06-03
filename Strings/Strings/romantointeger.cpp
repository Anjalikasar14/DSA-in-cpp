#include<bits/stdc++.h>
using namespace std;

int romantoint(string s){
  unordered_map<char,int> mp;
  mp['I'] =1;
  mp['V'] =5;
  mp['X'] =10;
  mp['L'] =50;
  mp['C'] =100;
  mp['D'] =500;
  mp['H'] =1000;

  int ans =0;

  for(int i=0;i<s.length(); i++){
    if(i<s.length()-1 && mp[s[i]] < mp[s[i+1]]){
      ans = ans - mp[s[i]];
    } else{
      ans = ans + mp[s[i]];
    }
  }

  return ans;

}



int main(){
  string s;
  cout<<"s:";
  cin>>s;

  cout<<romantoint(s);


}