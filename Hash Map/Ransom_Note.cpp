#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

class Solution {
public:
    bool have_Check(unordered_map<char,int> have, unordered_map<char, int> need){
        for(auto i: need){
            char c = i.first;
            int fneed = i.second;
            int fhave = have[c];
            if(fhave < fneed){
                return false;
            }
        }
        return true;
    }

    bool canConstruct(string ransomNote, string magazine) {
        int n = ransomNote.size();

        unordered_map<char, int> need;

        unordered_map<char, int> have;

        for(auto demand : ransomNote){
            need[demand]++;
        }
        for(auto hav: magazine){
            have[hav]++;
        }
        return have_Check(have ,need);


    }
};