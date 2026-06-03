#include <bits/stdc++.h>
using namespace std;

string lcp(vector<string>& str){
  if(str.empty()){
    return "";
  }

  string prefix = str[0];

  for(int i=1;i<str.size(); i++){
    while(str[i].find(prefix)!=0){
      prefix.pop_back();

      if(prefix.empty()){
        return "";
      }
    }
 
  }
     return prefix;

}

int main(){
  int n;
  cout<<"s:";
  cin>>n;

  vector<string> str(n);

  for(int i=0;i<n;i++){
    cin>>str[i];
  }

  cout<<lcp(str);
}