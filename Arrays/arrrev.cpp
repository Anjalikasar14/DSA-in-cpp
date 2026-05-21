#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"size:";
  cin>>n;

  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  int rev[n];
  for(int i=0;i<n;i++){
    rev[i]=arr[n-i-1];
  }
  for(int i=0;i<n;i++){
    cout<<rev[i];
  }
  return 0;
}