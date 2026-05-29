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

  int k;
  cout<<"k";
  cin>>k;

  k=k%n; //useful for k>n

   for(int i=0;i<k;i++){
    int first = arr[0];
    for(int j=0;j<n-1;j++){
      arr[j]=arr[j+1];
    }
    arr[n-1]= first;
   }

  for(int i=0;i<n;i++){
    cout<<arr[i];
  }


}