#include<bits/stdc++.h>
using namespace std;

  bool issubseq(string s,string t){
    int i=0;
    int j=0;
    while(i<s.length()&&j<t.length()){
      if(s[i]==t[j]){
        i++;
      }
      j++;
    }

    return i == s.length();
  }
int main(){
  string s,t;
  cin>>s>>t;

  cout<<issubseq(s,t);

}