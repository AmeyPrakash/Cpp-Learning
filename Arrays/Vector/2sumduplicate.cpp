#include<iostream>
#include<vector>

std::vector<std::vector<int>> twosumduplicate(std::vector<int>& nums, int target) {
    std::vector<std::vector<int>> ans;   //vector of vectors type int
    int left = 0, right = nums.size() - 1;

    while (left < right) {
        int sum = nums[left] + nums[right];

        if (sum == target) {
            ans.push_back({nums[left], nums[right]});

            int l = nums[left], r = nums[right];

            // skip duplicates safely
            while (left < right && nums[left] == l) left++;
            while (left < right && nums[right] == r) right--;
        }
        else if (sum < target) {
            left++;
        }
        else {
            right--;
        }
    }

    return ans;
}
int main(){
    std::vector<int> nums = {1,1,2,4,4,5,5,6,7,8,};
    int target = 9;
    std::vector<std::vector<int>> ans = twosumduplicate(nums,target);
    for (const auto& pair : ans) {
        for (int val : pair) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
    return 0;
    
}