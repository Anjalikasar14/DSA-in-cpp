#include<bits/stdc++.h>
using namespace std;

bool canfinish(vector<int>& piles,int h,int k){
  long long hours =0;

  for(int pile : piles){
    hours=hours+(pile+k-1)/k;
  }
  return hours <=h;

}

int mineatingspeed(vector<int>& piles, int h){
  int low =1;
  int high =*max_element(piles.begin(),piles.end());
  int ans = high;

  while(low<=high){
    int mid = low+(high-low)/2;

    if(canfinish(piles,h,mid)){
      ans =mid;
      high=mid-1;
    }else{
      low=mid+1;
    }
  }
  return ans;

}