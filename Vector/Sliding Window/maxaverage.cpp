#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
    double s=0;
    double ma=-INT_MAX;
    for(int i=0;i<nums.size();i++){
        s+=nums[i];
        if(i>=k-1){
            ma=max(ma,s);
            s-=nums[i-k+1];
        }

    }
    return ma/k;
    
    }
};
int main(){
    Solution s;
    vector<int> nums= {1,12,-5,-6,50,3};
    int k = 4;
    cout<<s.findMaxAverage(nums,k);
}