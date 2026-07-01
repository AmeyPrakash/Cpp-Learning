#include<iostream>

using namespace std;

class Solution {
public:
    int digitFrequencyScore(int n) {
        int sum = 0;
        while(n>0){
            int digit = 0;
            digit = n % 10;
            n = n/10;
            sum += digit;
        }
        return sum;
    }
};