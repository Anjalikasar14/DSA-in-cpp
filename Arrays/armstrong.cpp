#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter";
  cin>>n;

  int og =n;
  int sum =0;
  while(n>0){
    int ld = n%10;
    sum = (ld*ld*ld) + sum;
    n=n/10;
  }
  if(sum==og){
  cout<<"yes";
  }else{
    cout<<"no";
  }
  return 0;
}