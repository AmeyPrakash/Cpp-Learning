#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;

        while(low < high) {
            int guess = low + (high - low) / 2;

            if(nums[guess] > nums[high]) { //part 1
                low = guess + 1;
            }
            else {
                high = guess; //part2
            }
        }

        return nums[low];
    }
};