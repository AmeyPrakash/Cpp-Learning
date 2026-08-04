#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();

        int low = 0, high = n - 1;
        int res1 = -1, res2 = -1;

        // First occurrence
        while (low <= high) {
            int guess = low + (high - low) / 2;

            if (nums[guess] < target)
                low = guess + 1;
            else if (nums[guess] > target)
                high = guess - 1;
            else {
                res1 = guess;
                high = guess - 1;
            }
        }

        //reset 
        low = 0;
        high = n - 1;

        // Last occurrence
        while (low <= high) {
            int guess = low + (high - low) / 2;

            if (nums[guess] < target)
                low = guess + 1;
            else if (nums[guess] > target)
                high = guess - 1;
            else {
                res2 = guess;
                low = guess + 1;
            }
        }

        return {res1, res2};
    }
};