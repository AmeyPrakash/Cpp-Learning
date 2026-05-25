#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string word;
        stringstream ss(s);  
        while(ss >> word){   //taking words one by one 
            words.push_back(word); 
        }
        string ans = ""; 

        // going in reverse manner
        for(int i = words.size() - 1; i>=0;i--){
            ans = ans + words[i];

            if(i != 0){   //to add space and avoid at starting and ending 
                ans = ans + " ";  
            }
        }
        return ans;
        
    }
};
int main(){
    Solution sol;
    string s = "Hello World everyone";
    cout<<sol.reverseWords(s)<<"\n";
    return 0;
}