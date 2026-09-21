#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
                vector<long long> result(k, 0);

        // dp[r] = subarrays ending at previous index
        // having product % k == r
        vector<long long> dp(k, 0);

        for (int x : nums) {
            vector<long long> newDp(k, 0);

            int val = x % k;

            // new subarray containing only x
            newDp[val]++;

            //previous subarrays
            for (int r = 0; r < k; r++) {
                int nr = (r * val) % k;
                newDp[nr] += dp[r];
            }

            dp = newDp;

            // one valid operation
            for (int r = 0; r < k; r++) {
                result[r] += dp[r];
            }
        }

        return result;
    }
};