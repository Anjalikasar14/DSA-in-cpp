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

   int minprice = arr[0];
   int maxprofit = 0;
  
   for(int i=1;i<n;i++){
   if(minprice>arr[i]){
    minprice =arr[i];
   }
   int profit =  arr[i]-minprice;
   if(maxprofit<profit){
    maxprofit = profit;
   }
   }
   
 
   cout<<maxprofit;
}