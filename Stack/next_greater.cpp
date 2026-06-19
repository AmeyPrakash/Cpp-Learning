#include<iostream>
#include<stack>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, -1); //vector of -1;
        stack<int> st;          
        
        for (int i = 2 * n - 1; i >= 0; i--) {  //looping 2 times as array is circular
            int idx = i % n; //get idx below n
            
            while (!st.empty() && st.top() <= nums[idx]) {
                st.pop();
            }
            
            if (i < n) {  
                if (!st.empty()) {
                    res[idx] = st.top();
                }
            }
            
            st.push(nums[idx]);
        }
        
        return res;
    }
};
