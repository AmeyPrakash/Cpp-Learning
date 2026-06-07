#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int left =0,right;
        int sum=0;
        for(int i = 0; i<n;i++){
            sum += nums[i];
        }
        for(int i = 0;i<n;i++){
           
            right = sum - nums[i] - left;
            if(left == right){
                return i;
            }
            left += nums[i];
        }
        return -1;
        
    }
};
int main(){
    Solution s;
    vector<int> nums = {1,7,3,6,5,6};
    cout<<" The pivot index is: "<<s.pivotIndex(nums);
    return 0;
}