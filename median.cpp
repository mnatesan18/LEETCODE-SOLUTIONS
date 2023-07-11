#include <bits/stdc++.h>
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2);
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){
     vector<int>k;
        for(int i=0;i<nums1.size();i++){
k.push_back(nums1[i]);
        }
        for(int j=0;j<nums2.size();j++){
            k.push_back(nums2[j]);
        }
        sort(k.begin(),k.end());
        double med;
        double siz=k.size();
        if(k.size()%2==0){
            med=double(k[((k.size())/2)-1]+k[(k.size()/2)])/2;}
        else{
            med=k[k.size()/2];

        }
       return med; 

}
int main(){
    vector<int>nums1{1,3};
    vector<int>nums2{2,6};
    cout<<findMedianSortedArrays(nums1,nums2)<<endl;
}