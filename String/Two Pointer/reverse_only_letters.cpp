#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    string reverseOnlyLetters(string s) {
        int right = s.length() - 1;
        int left = 0;
        while(left < right){
            while(left < right && !isalpha(s[left])){
                left++;
            }
            while(left < right && !isalpha(s[right])){
                right--;
            }
            swap(s[left], s[right]);
            left++;
            right--;
        }
        return s;
    }
};