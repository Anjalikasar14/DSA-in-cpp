#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter size of array";
  cin>>n;
  int arr[n];

  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int la=arr[0];
  int sla=arr[0];

  for(int i=0;i<n;i++){
    if(arr[i]>la){
      sla=la;
      la=arr[i];
    }else if(arr[i]>sla && arr[i]!=la){
      sla=arr[i];
    }
  } 
  cout<<sla;
}