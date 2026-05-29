#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cout<<"size:";
  cin>>n;

  vector<int> arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int count =0;
  int cand =0;


for(int i=0;i<n;i++){
  if(count == 0){
    cand = arr[i];
  }

   if(arr[i]==cand){
      count ++;
  } else {
    count--;
  }
}
cout<<cand;
}