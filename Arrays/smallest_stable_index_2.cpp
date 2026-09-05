#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> minindex(n,0);
        int minel = INT_MAX;
        int maxel = INT_MIN;
        for(int i = n-1; i>=0; i--){
            minel = min(minel, nums[i]);
            minindex[i] = minel;
        }
        for(int i = 0; i<n; i++){
            maxel = max(maxel , nums[i]);
            minel = minindex[i];
            if(maxel - minel <= k){
                return i;
            }
        }
        return -1;
    }
};