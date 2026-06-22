#include<iostream>
#include<string>
#include<stack>
using namespace std;


class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>> st;
        string ans;

        for(char c : s) {
            if(!st.empty() && st.top().first == c) {
                st.top().second++;
                if(st.top().second == k) {
                    st.pop();
                }
            }
            else {
                st.push({c, 1});
            }
        }
        while(!st.empty()) {
            char ch = st.top().first;
            int cnt = st.top().second;

            ans = string(cnt, ch) + ans;
            st.pop();
        }

        return ans;
    }
};