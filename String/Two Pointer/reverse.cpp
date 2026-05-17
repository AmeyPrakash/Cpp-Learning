#include<iostream>
#include<vector>
class Solution {
public:
    void reverseString(std::vector<char>& s) {
        int n = s.size()-1;
        int left = 0;
        int right = n;
        while(left < right){
            std::swap(s[left],s[right]);
            left++;
            right--;
        }
        
    }
};
int main() {
    Solution s;
    std::vector<char> arr = {'h','e','l','l','o'};
    s.reverseString(arr);
    for(auto x:arr){
        std::cout<<x<<std::endl;
    }
    return 0;
}