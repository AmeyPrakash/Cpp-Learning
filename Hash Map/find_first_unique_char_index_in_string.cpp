#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
        unordered_map<char, int> f;
        for(int i = 0; i<n; i++){
            f[s[i]]++;      
        }
        for(int i = 0; i< n; i++){
            if(1 == f[s[i]]){
                return i;
            }
        }
        return -1;
    }
};