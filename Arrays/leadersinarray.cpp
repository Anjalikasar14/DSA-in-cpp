#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cout<<"size:";
  cin>>n;

  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  for(int i=0;i<n;i++){
    bool leader = true;

    for(int j=i;j<n;j++){
      if(arr[j]>arr[i]){
        leader = false ;
      }
    }  

    if(leader){
      cout<<arr[i];
    }
  }
}