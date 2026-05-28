#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cout<<"size";
  cin>>n;

  vector<int> arr(n);

  for(int i=0;i<n;i++){
    cin>>arr[i];
}

  int rightmax = 0;
  int leftmax = 0;


  for(int i=0;i<n;i++){
    if(arr[i]>arr[i+1]){
      leftmax = arr[i];
    }
}

  for(int i=n;i>0;i--){
     if(arr[i]>arr[i-1]){
      rightmax = arr[i];
    }
  }

  int minwall = min(leftmax,rightmax);

 for(int i=0;i<n;i++){
  int water = minwall - arr[i];
 }
}