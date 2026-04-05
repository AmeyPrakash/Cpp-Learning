#include<iostream>
#include<vector>
#include<algorithm>

int sumsmall(std::vector<int>& nums, int target){
    int ans = 0;
    std::sort(nums.begin(), nums.end());
    int n = nums.size();
    for (int i = 0; i < n-2; i++){
        int left = i+1;
        int right = n-1;
        while (left<right)
        {
            int sum = nums[i]+nums[left]+nums[right];
            if (sum>=target)
            {
                right--;
            }
            else{
                ans=ans+(right-left);
                left++;
            }
        }
        
    }
    
    return ans;
}
int main() {
    std::vector<int> nums = {-2,0,1,3,4,5};
    int target = 2;
    int ans = sumsmall(nums,target);
    std::cout<<ans<<std::endl;
    return 0;
}