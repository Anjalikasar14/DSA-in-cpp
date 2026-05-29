#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter";
  cin>>n;

  int rev = 0;
  int og =n;

  while(n>0){
    int ld = n%10;
    rev =ld+10*rev;
    n=n/10;
  }

  if(rev==og){
    cout<<"palindrome";
  } else{
    cout<<"no";
  }
}