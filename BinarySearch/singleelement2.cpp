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

  int low =0;
  int high = n-1;
  int ans =n;

  while(low<=high){
    int mid = low + (high-low)/2;

    if(mid%2!=0){
      mid--;
    }

    if(arr[mid]==arr[mid+1]){
      low = mid+2;
    }else{
      high= mid;
    }
  }
 return 0;
}