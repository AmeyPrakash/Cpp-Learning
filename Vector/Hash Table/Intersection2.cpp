#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        //if num1 or num2 is larger than one another then we can do a recursive call 
        //if(nums1.size() > nums2.size()) {
        //    return intersect(nums2, nums1);   
        //}
        //hashmap will store smaller array 
        // larger array will be iterated

        unordered_map<int,int> mp;
        vector<int> ans;
        for(int x : nums1) {
            mp[x]++;
        }
        for(int x : nums2) {
            if(mp[x] > 0) {
                ans.push_back(x);
                mp[x]--;
            }
        }
        return ans;
    }
};