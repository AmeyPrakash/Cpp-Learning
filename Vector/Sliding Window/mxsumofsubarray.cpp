#include<iostream>
#include<vector>
using namespace std;

int mxmsum(vector<int> &nums, int k){
    if (nums.size()<k){
        return 0;
    }
    int mxsum = 0;
    int result = INT_MIN;
    for (int i = 0; i < k; i++) //first sum
    {
        mxsum = mxsum + nums[i];

    }
    result = mxsum;
    for (int i = k; i < nums.size(); i++) //slide
    {
        mxsum = mxsum - nums[i-k] + nums[i];
        result = max(result, mxsum);
    }
    return result;
}
int main(){
    vector<int> nums = {100,200,300,400};
    int k = 2;
    cout<<mxmsum(nums,k);
}