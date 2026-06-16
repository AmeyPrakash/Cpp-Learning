#include<iostream>
#include<stack>
#include<string>

using namespace std;

string reversestring(string s){
    stack<int> st;
    int n = s.size();
    string ans;
    for(int i = 0; i< n; i++){
        st.push(s[i]);
    }
    while(!st.empty()){
        ans += st.top();
        st.pop();
        
    }

    return ans;
}
int main(){
    string s = "abc";
    cout<< reverse(s)<< endl;
    return 0;
}