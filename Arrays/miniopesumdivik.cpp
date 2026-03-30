#include<iostream>
using namespace std;
#include<vector>


int minOperations(vector<int>& nums, int k) {
    int sum = 0,count = 0;

    for(int i = 0;i<nums.size();i++){
        sum += nums[i];
    }
    while (sum % k != 0)
    {
        sum -= 1;
        count++;
    }
    return count;
        
}


int main(){
    vector<int> v={3,9,7};
    cout<<minOperations(v,5)<<endl;


    return 0;
}