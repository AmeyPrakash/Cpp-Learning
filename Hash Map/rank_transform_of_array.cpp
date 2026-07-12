#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> sorted = arr;
        sort(sorted.begin(), sorted.end());

        unordered_map<int, int> rank;
        int rnk = 1;

        for (int num : sorted) {
            if (rank.find(num) == rank.end()) {
                rank[num] = rnk++;
            }
        }

        for (int &num : arr) {
            num = rank[num];
        }

        return arr;
    }
};