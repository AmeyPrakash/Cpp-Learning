#include<iostream>
using namespace std;
#include<vector>

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int best = nums[0];
        int ans = nums[0];
        for (int i = 1; i < n; i++) {
            int x = best + nums[i];
            int y = nums[i];
            best = max(x, y);
            ans = max(ans, best);
        }
        return ans;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << sol.maxSubArray(nums) << endl;
    return 0;
}