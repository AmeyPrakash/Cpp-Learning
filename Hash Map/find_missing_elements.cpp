#include<iostream>
#include<unordered_set>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        
        if(nums.empty()) return {};

        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end()); //dereference
        
        unordered_set<int> st(nums.begin(),nums.end()); // for lookup

        for (int i = mini + 1; i < maxi; i++) { //maintaining sorted order
            if (!st.count(i))  // if exists 1 otherwise 0
                ans.push_back(i); // push if doesnt exists
        }
        return ans;
    }
};