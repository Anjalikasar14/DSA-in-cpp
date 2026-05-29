#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cout<<"size";
  cin>>n;

  vector<int> v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }

  int pos;
  cout<<"pos:";
  cin>>pos;

  for(int i=pos;i<n;i++){
    v[i]=v[i+1];
  }

  v.pop_back();

  for(int i=0;i<n-1;i++){
    cout<<v[i];
  }
}