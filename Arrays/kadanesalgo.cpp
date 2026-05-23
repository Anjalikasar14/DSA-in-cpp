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
  int currentsum = arr[0];
  int maxsum = arr[0];
for(int i=1;i<n;i++){
    currentsum = max(arr[i],currentsum + arr[i]);

    if(maxsum<currentsum){
      maxsum = currentsum;
    }
  
}
cout<<maxsum;
}