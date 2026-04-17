#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        int n = order.size();
        vector<int> res;
        unordered_set<int> s(friends.begin(), friends.end());
        for(int x: order){
            if (s.find(x) != s.end()){
                res.push_back(x);
            }

        }
        return res;
    }
};