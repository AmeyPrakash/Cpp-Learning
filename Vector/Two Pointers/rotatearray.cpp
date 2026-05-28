#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n; //if the k is greater than the array size then there will be a point when it will become same as original array,to remove this excess rotation thing we used k=k%n;
        reverse(nums.begin(), nums.end()); //this will reverse the whole array.
        reverse(nums.begin(), nums.begin() + k); //this will reverse the new elements that are at front now.
        reverse(nums.begin() + k, nums.end());// this will reverse the elemnts that are at the end
        
    }
};
int main(){
    Solution s;
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;
    s.rotate(nums,k);
    for(int i : nums){
        cout << i << " ";
    }
    return 0;
}