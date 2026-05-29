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
  int start=0;
  int end=n-1;

  bool palindrome = false;

  while(start<end){
    if(arr[start]==arr[end]){
      start++;
      end--;
      palindrome=true;
    } else{
      palindrome =false;
    }
  }

  if(palindrome){
    cout<<"yes";
  } else{
    cout<<"no";
  }
}