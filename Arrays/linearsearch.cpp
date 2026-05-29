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
  int key;
  cout<<"key to search:";
  cin>>key;

  for(int i=0;i<n;i++){
    if(arr[i]==key){
      cout<<i;
    } 
  }
  
}