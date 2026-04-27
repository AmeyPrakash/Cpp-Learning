#include<iostream>
#include<string>
using namespace std;
#include<algorithm>

class Solution {
public:
    string reversePrefix(string word, char ch) {
      int idx = word.find(ch);
        if (idx != -1) {
            reverse(word.begin(), word.begin() + idx + 1);
        }
        return word;
    }
};