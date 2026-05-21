#include<iostream>
using namespace std;
int main(){
  int a;
  cout<<"enter a";
  cin>>a;
  int b;
  cout<<"enter b";
  cin>>b;

  int temp=0;
  temp=a;
  a=b;
  b=temp;
  cout<<"a ="<<a;
  cout<<"b ="<<b;
return 0;

}