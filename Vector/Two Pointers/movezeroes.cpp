#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        for(int j = 0; j <n; j++){
            if(nums[j] != 0){
                swap(nums[i],nums[j]);
                i++;
            }
        }

        
    }
};
int main(){
    Solution s;
    vector<int> arr = {0,1,0,3,1,2};
    s.moveZeroes(arr);
    for(auto x:arr){
        cout<<x<<endl;
    }
}