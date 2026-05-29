#include<bits/stdc++.h>
using namespace std;

int main(){
  int n1;
  cout<<"size1:";
  cin>>n1;

   int n2;
  cout<<"size2:";
  cin>>n2;

  vector<int> arr1(n1);
  vector<int> arr2(n2);

  for(int i=0;i<n1;i++){
    cin>>arr1[i];
  }
  for(int i=0;i<n2;i++){
    cin>>arr2[i];
  }

  int arr[n1+n2];

  for(int i=0;i<n1;i++){
    arr[i]=arr1[i];
  }
  for(int i=0;i<n2;i++){
    arr[n1+i]=arr2[i];
  }
  for(int i=0;i<n1+n2;i++){
    cout<<arr[i];
  }

}