#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    string clearDigits(string s) {
        string res;
        for(auto digit: s){
            if(isdigit(digit)){
                if(!res.empty()){
                    res.pop_back();
                }
            }
            else{
                res.push_back(digit);
            }
        }
        return res;
    }
};