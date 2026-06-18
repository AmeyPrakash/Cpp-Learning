#include<iostream>
#include<stack>
#include<vector>

using namespace std;

class Solution {
  public:
    vector<int> preGreaterEle(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;
        vector<int> res(n);
        res[0] = -1;
        st.push(arr[0]);
        for(int i = 1; i< n; i++){
            while(!st.empty() && st.top() <= arr[i]){
                st.pop();
            }
            if(st.empty()){
                res[i] = -1;
            }
            else{
                res[i] = st.top();
            }
            st.push(arr[i]);
        }
        return res;
    }
};