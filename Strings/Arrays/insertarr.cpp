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
  int pos,value;
  cin>>pos>>value;

  for(int i=n;i>pos;i--){
   arr[i]=arr[i-1];
  }
  arr[pos]=value;

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}