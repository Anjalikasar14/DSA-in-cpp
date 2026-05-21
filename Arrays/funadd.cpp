#include<iostream>
using namespace std;
int add(int a,int b){
  int sum = a+b;
  return sum;
}

int main(){
  int x,y;
  cin>>x>>y;

  int ans=add(x,y);

  cout<<ans;

  return 0;
}