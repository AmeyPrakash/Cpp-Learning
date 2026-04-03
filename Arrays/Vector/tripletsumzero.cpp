#include<iostream>
#include<vector>
#include<algorithm>

std::vector<std::vector<int>> tripletsum(std::vector<int>& nums, int target){
    int n = nums.size();
    std::vector<std::vector<int>> ans;
    std::sort(nums.begin(),nums.end());   //Sorted the array


    for(int i=0;i<n-2;i++){     //First loop  fixed the element 
        int left = i+1;
        int right = n-1;
        if (i>0 && nums[i]==nums[i-1]) continue;
        int sum = -1 * nums[i];
        while(left<right){         //second loop to find pair

            int s = nums[left]+nums[right];

            if (s==sum){
            
                ans.push_back({nums[i], nums[left], nums[right]});
                left++;
                right--;
                while (left<n && nums[left]==nums[left-1])   //To avoid duplicates
                {
                    left++;
                }
                while(right >=0 && nums[right]==nums[right+1]){  //To avoid duplicates
                    right--;
                }

                
            }
            else if (s<sum){
                left++;
            }
            else{
                right--;
            }
            
            
            
        }
        
       
    }
    return ans;
}
int main(){
    std::vector<int> nums = {-1,0,1,2,-1,-4};
    int target = 0;
    std::vector<std::vector<int>> ans = tripletsum(nums,target);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            std::cout<<ans[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}