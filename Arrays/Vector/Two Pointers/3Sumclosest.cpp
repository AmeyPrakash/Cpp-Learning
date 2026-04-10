#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>

int Sum3(std::vector<int> &nums, int target){
    std::sort(nums.begin(), nums.end());
    int n = nums.size();
    int diff = INT_MAX;
    int res_sum = 0;

    for (int i = 0; i < n - 2; i++) {
        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int total = nums[i] + nums[left] + nums[right];
            int d = abs(target - total);

            if (diff > d) {
                diff = d;
                res_sum = total;
            }

            if (total == target) {
                return res_sum;
            }

            if (total < target) {
                left += 1;
            } else {
                right -= 1;
            }
        }
    }

    return res_sum;
}
int main(){
    std::vector<int> nums = {-1,2,1,-4};
    int target = 1;
    int ans = Sum3(nums,target);
    std::cout<<ans<<std::endl;
    return 0;
}

