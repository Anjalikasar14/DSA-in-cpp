#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cout<<"size:";
  cin>>n;

  vector<int> v(n);

  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  int pos,val;
  cin>>pos>>val;

  v.push_back(0);

  for(int i=n;i>pos;i--){
    v[i]=v[i-1];
  }

  v[pos]=val;

  for(int i=0;i<n+1;i++){
    cout<<v[i];
  }

  return 0;

}