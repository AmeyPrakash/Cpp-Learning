#include<iostream>
#include<string>
#include<stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char> st;
        for(int i = 0; i < n; i++){
            //Opening
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {  
                st.push(s[i]);
            }
            //Closing
            else {
                if(st.empty()) {  
                    return false;
                }
                else if(s[i] == ')' && st.top() == '('){
                    st.pop();
                }
                else if(s[i] == '}' && st.top() == '{'){
                    st.pop();
                }
                else if(s[i] == ']' && st.top() == '['){
                    st.pop();
                }
                else{
                    return false; //wrong closing
                }
            }
        }
        return st.empty();
    }
};