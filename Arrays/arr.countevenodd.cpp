#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"size:";
  cin>>n;
  int even=0;
  int odd=0;

  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=0;i<n;i++){
     if(arr[i]%2==0){
      even++;
    } else{
      odd++;
    }
  }

  cout<<even<<endl;
  cout<<odd;

  return 0;


}