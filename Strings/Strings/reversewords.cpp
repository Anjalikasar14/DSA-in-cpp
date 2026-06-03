#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cout<<"s:";
  getline(cin,s);

 vector<string> words;
  string word ="";

  for(char ch : s){
    if(ch==' '){
      words.push_back(word);
      word = "";
    } else{
      word = word+ch;
    }

  }

  words.push_back(word);

  for(int i=words.size()-1;i>=0;i--){
    cout<<words[i]<<" ";
  }
}