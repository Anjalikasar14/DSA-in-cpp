#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter";
  cin>>n;

  int count=0;
  for(int i=0;i<=n;i++){
    if(n%i==0){
      count++;
    }
    
  }
}