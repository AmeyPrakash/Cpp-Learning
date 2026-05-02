#include<iostream>
using namespace std;
#include<vector>

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int  n = nums.size();
        vector<int> less, equal, greater;
        for(int i=0; i < n; i++){
            if(nums[i] < pivot){
                less.push_back(nums[i]);
            }
            else if(pivot == nums[i]){
                equal.push_back(nums[i]);
            }
            else{
                greater.push_back(nums[i]);
            }
            
        }
        vector<int> result;
        result.reserve(n);
        result.insert(result.end(), less.begin(), less.end());
        result.insert(result.end(), equal.begin(), equal.end());
        result.insert(result.end(), greater.begin(), greater.end());

        return result;

    }
};