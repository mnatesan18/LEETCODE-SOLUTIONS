#include <bits/stdc++.h>
using namespace std;
 int maxSubArray(vector<int>& nums);
 int maxSubArray(vector<int>& nums) {
      int cur_sum=0;
      int minsum=INT_MIN;
      int maxi;
      for(int i:nums){
          cur_sum+=i;
          if(cur_sum<i){
cur_sum=i;
          }
          if(minsum<cur_sum){
              minsum=cur_sum;
          }
      maxi=max(cur_sum,minsum);
      }

    return maxi;}
int main(){
    vector<int>nums{-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSubArray(nums)<<endl;
}