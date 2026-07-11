#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int n = nums.size();
        int freq = 0;
        for(int i = 0; i < n; i++){

            int number = nums[i];

            while(number > 0){
                int extract_digit = number % 10;
                if(digit == extract_digit){
                    freq++;
                }
                number = number/10;
            }
        }
        return freq;
        
    }
};