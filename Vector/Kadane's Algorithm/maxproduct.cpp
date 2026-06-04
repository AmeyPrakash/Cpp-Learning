#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int minend = nums[0]; //to calculate for - * - and + * - maxs
        int maxend = nums[0];
        int ans = nums[0];
        for(int i = 1; i<n; i++){
            int x = nums[i];
            int y = minend * nums[i];
            int z = maxend * nums[i];
            maxend = max(x, max(y, z)); //best +
            minend = min(x, min(y, z)); //worst -
            ans = max(ans, max(minend, maxend));
        }
        return ans;
        
    }
};

int main(){
    Solution s;
    vector<int> nums = {2,3,-2,4};
    cout<<s.maxProduct(nums)<<endl;
    return 0;
}