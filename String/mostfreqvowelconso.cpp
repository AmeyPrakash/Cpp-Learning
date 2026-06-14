#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    int maxFreqSum(string s) {
        vector<int> freq(26, 0);
        for(auto c: s){
            freq[c - 'a']++;
        }
        int vowel = 0;
        int cons = 0;
        string vowels = "aeiou";
        for(int  i =0; i < 26; i++){
            char ch = 'a' + i;
            if(vowels.find(ch) != string::npos){
                vowel = max(vowel, freq[i]);
            }
            else{
                cons = max(cons, freq[i]);
            }

        }
        return vowel + cons;

        
    }
};