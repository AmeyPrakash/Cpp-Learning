#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string reversePrefix(string s, int k) {
        int n = s.size();
        int left = 0;
        int right = k-1;
        if(k>n) k=n;
        while(left < right){
            swap(s[left],s[right]);
            right--;
            left++;
        }
        return s;
        
    }
};