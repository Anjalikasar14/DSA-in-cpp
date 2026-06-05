#include<bits/stdc++.h>
using namespace std;
bool isIso(string s1,string s2){
  unordered_map<char,char> m1;
  unordered_map<char,char> m2;

  for(int i=0;i<s1.length();i++){
    char c1 =s1[i];
    char c2 =s2[i];
   
    //check kro ki c1 already to mapped nhi h aur hai bhi toh c2 se different
    //element se toh nhi h agr aisa hai to false
    if(m1.count(c1)&&m1[c1]!=c2){
      return false;
    }

    if(m2.count(c2)&&m2[c2]!=c1){
      return false;
    }

    m1[c1]=c2;
    m2[c2]=c1;
  }

  return true;
}

int main(){
  string s1,s2;
  cin>>s1>>s2;
  cout<<isIso(s1,s2);
}